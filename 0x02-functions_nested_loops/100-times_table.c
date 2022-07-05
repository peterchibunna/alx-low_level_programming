#include "main.h"
/**
 * print_times_table - prints n times table
 * @n: The number whose times-table to generate
 */
void print_times_table(int n)
{
	int x, y, result;

	if (n >= 0 && n <= 15) /* if n is between 0 and 15 */
	{
		for (x = 0; x <= n; x++)
		{
			_putchar('0');

			for (y = 1; y <= n; y++)
			{
				_putchar(',');
				_putchar(' ');

				result = x * y;

				if (result <= 99)
				{
					_putchar(' ');
				}
				if (result <= 9)
				{
					_putchar(' ');
				}
				if (result >= 100)
				{
					_putchar((result / 100) + '0');
					_putchar(((result / 10)) % 10 + '0');
				}
				else if (result <= 99 && result >= 10)
				{
					_putchar((result / 10) + '0');
				}
				_putchar((result % 10) + '0');
			}
			_putchar('\n'); /* end the row */
		}
	}
}
