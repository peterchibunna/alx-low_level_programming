#include "main.h"

/**
 * _abs - Prints the absolute value of a number.
 * @n: The number whose abs value will be printed.
 *
 * Return: 0 Always
 */
int _abs(int n)
{
	if (n >= 0)
	{
		_putchar(n);
	}
	else
	{
		_putchar(n * -1);
	}
	return (0);
}
