#include "main.h"

/**
 * print_diagonal - prints diagonal line that is `n`
 *                  units long followed by new line character
 * @n: Controls the size of the diagonal
 */

void print_diagonal(int n)
{
	int i, j;

	if (n < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
