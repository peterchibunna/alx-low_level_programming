#include "main.h"

/**
 * print_line - prints line that is `n` units long
 *		followed by new line character
 * @n: Controls the length of the line
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
