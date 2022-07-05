#include "main.h"
/**
 * times_table - Prints the 9 times table starting with 0
 */
void times_table(void)
{
	int x, y, result;

	for (x = 0; x <= 9; x++)
	{
		_putchar('0');

		for (y = 1; y <= 9; y++)
		{
			_putchar(',');
			_putchar(' ');

			result = x * y;

			if (result <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((result / 10) + '0');
			}

			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
