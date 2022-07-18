#include "main.h"
/**
 * print_chessboard - finction fesviption
 * @a: Parameter
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	for (; i < 8; i++)
	{
		j = 0;
		for (; j < 8; j++)
		{
			_putchar(a[i][j]);
			if (j == 7)
			{
				_putchar('\n');
			}
		}
	}
}
