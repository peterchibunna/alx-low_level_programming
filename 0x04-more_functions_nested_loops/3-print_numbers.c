#include "main.h"

/**
 * print_numbers - prints numbers 0 to 9 followed by new line character
 *
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
