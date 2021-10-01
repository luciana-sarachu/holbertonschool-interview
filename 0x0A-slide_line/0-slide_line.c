#include "slide_line.h"
/**
* to_right - move to the right
* @line: pointer to head of line
* @size: size of the int array
*/
void to_right(int *line, size_t size)
{
	int i, ii = 0, max = size - 1, n = 0;

	for (i = max; i >= 0; i--)
	{
		if (line[i] == 0)
			ii++;
		if (line[i] > 0)
			n++;
		if (line[i] > 0 && ii > 0)
		{
			line[i + ii] = line[i];
			line[i] = 0;
			i = i + ii;
			ii = 0;
		}
	}
	ii = max;
	for (i = max; i > max - n; i--)
	{
		if (i > max - n + 1 && line[i] == line[i - 1])
		{
			line[ii] = line[i] + line[i - 1];
			line[i - 1] = 0;
			if (ii != i)
				line[i] = 0;
			ii--;
		}
		else if (line[i] > 0 && ii < max)
		{
			line[ii] = line[i];
			if (ii != i)
				line[i] = 0;
			ii--;
		}
		else if (line[i] > 0)
			ii--;
	}
}
/**
* to_left - move to the left
* @line: pointer to head of line
* @size: size of the int array
*/
void to_left(int *line, size_t size)
{
	int i, ii = 0, n = 0;

	for (i = 0; i < (int)size; i++)
	{
		if (line[i] == 0)
			ii++;
		if (line[i] > 0)
			n++;
		if (line[i] > 0 && ii > 0)
		{
			line[i - ii] = line[i];
			line[i] = 0;
			i = i - ii;
			ii = 0;
		}
	}
	ii = 0;
	for (i = 0; i < n; i++)
	{
		if (i < n - 1 && line[i] == line[i + 1])
		{
			line[ii] = line[i] + line[i + 1];
			line[i + 1] = 0;
			if (ii != i)
				line[i] = 0;
			ii++;
		}
		else if (line[i] > 0 && ii > 0)
		{
			line[ii] = line[i];
			if (ii != i)
				line[i] = 0;
			ii++;
		}
		else if (line[i] > 0)
			ii++;
	}
}
/**
 * slide_line - slides and merges an array of integers
 * @line: pointer to head of line
 * @size: size of the int array
 * @direction: direction to slide
 * Return: 1 if accomplish, 0
 */
int slide_line(int *line, size_t size, int direction)
{
	if (direction != 0 && direction != 1)
		return (0);
	if (line == NULL || size < 1)
		return (0);
	if (direction == 0)
		to_left(line, size);
	if (direction == 1)
		to_right(line, size);
	return (1);
}
