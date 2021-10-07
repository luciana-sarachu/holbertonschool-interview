#include "menger.h"
/**
 * menger - draws a 2D Menger Sponge
 * @level: is the level of the Menger Sponge to draw
 */
void menger(int level)
{
	/** [Mathematics] xy = pow(x, y) [In programming] **/
	int col, row, size;


	if (level >= 0)
	{
		size = pow(3, level);
		for (col = 0; col < size; col++)
		{
			for (row = 0; row < size; row++)
				if (col % 3 == 1 && row % 3 == 1)
				{
					printf(" ");
				}
				else
				{
					printf("#");
				}
			printf("\n");
		}
	}
}
