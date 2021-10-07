#include "menger.h"
/**
 * choose_hashtag_or_blank - return hashtag or leave empty
 * @col:  is th column
 * @row: is the row
 * Return: '#' or ' '
 */
char choose_hashtag_or_blank(int col, int row)
{
	for (; col && row; col /= 3, row /= 3)
		if (col % 3 == 1 && row % 3 == 1)
			return (' ');
	return ('#');
}

/**
 * menger - draws a 2D Menger Sponge
 * @level: is the level of the Menger Sponge to draw
 */
void menger(int level)
{
	int col, row, size;

	if (level >= 0)
	{
		/** [Mathematics] xy = pow(x, y) [In programming] **/
		size = pow(3, level);
		for (col = 0; col < size; col++)
		{
			for (row = 0; row < size; row++)
				printf("%c", choose_hashtag_or_blank(col, row));
			printf("\n");
		}
	}
}
