#include "main.h"

/**
 * _print_rev_recursion - function description.
 * @s: parameter
 */

void _print_rev_recursion(char *s)
{
	unsigned int i = 0;

	if (s[i] != '\0')
	{
		_print_rev_recursion(s + i + 1);
		_putchar(s[i]);
		i++;
	}
}
