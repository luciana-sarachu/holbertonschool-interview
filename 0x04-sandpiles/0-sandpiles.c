#include "sandpiles.h"

/**
 * print_grid - Print 3x3 grid
 * @grid: 3x3 grid
 */

static void print_grid(int grid[3][3])
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (j)
				printf(" ");
			printf("%d", grid[i][j]);
		}
		printf("\n");
	}
}

/**
 * is_stable - checks the stability of a sandpile
 * @grid: 3x3 grid to test
 * Return: 1 if stable, 0 else
 */

int is_stable(int grid[3][3])
{
	int i, j = 0;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (grid[i][j] > 3)
				return (0);
		}
	}
	return (1);
}

/**
 * sandpile_toppling - topples the sandpile to make it stable
 * @grid1: the 3x3 sandpile
 * @grid2: an empty 3x3 grid
 */

void sandpile_toppling(int grid1[3][3], int grid2[3][3])
{
	int x, y = 0;

	while (y < 3)
	{
		x = 0;
		while (x < 3)
		{
			if (grid1[y][x] > 3)
			{
				grid2[y][x] += grid1[y][x] - 4;
				if (y - 1 >= 0)
					grid2[y - 1][x] += 1;
				if (x - 1 >= 0)
					grid2[y][x - 1] += 1;
				if (y + 1 < 3)
					grid2[y + 1][x] += 1;
				if (x + 1 < 3)
					grid2[y][x + 1] += 1;
			}
			else
				grid2[y][x] += grid1[y][x];
			x++;
		}
		y++;
	}
}

/**
 * sandpiles_sum - computes the sum of two sandpiles
 * @grid1: Left 3x3 grid
 * @grid2: Right 3x3 grid
 */

void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
	int x, y = 0;
	int i, j = 0;

	for (x = 0; x < 3; x++)
	{
		for (y = 0; y < 3; y++)
		{
			grid1[x][y] = grid1[x][y] + grid2[x][y];
		}
	}
	while (is_stable(grid1) != 1)
	{
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				grid2[i][j] = 0;
			}
		}
		printf("=\n");
		print_grid(grid1);
		sandpile_toppling(grid1, grid2);

		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				grid1[i][j] = grid2[i][j];
			}
		}
	}
}
