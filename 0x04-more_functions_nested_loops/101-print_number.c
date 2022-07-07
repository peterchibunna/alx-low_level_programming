#include "main.h"

/**
 * print_number - print integer
 * @n: The number to print
 */
void print_number(int n)
{
	unsigned int x;
	unsigned int i;
	unsigned int y;

	i = 1;

	if (n < 0)
	{
		_putchar('-');
		y = -n;
	}
	else
	{
		y = n;
	}
	x = y;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		while (x >= 10)
		{
			i = i * 10;
			x = x / 10;
		}
		while (i > 1)
		{
			_putchar((y / i) + '0');
			y = y % i;
			i = i / 10;
		}
		_putchar(y + '0');
	} 
}
