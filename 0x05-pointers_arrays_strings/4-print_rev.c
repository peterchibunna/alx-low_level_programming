#include "main.h"
/**
 * print_rev - code definition
 * @s: The string parameter
 */
void print_rev(char *s)
{
	int i = 0;
	int len = 0;

	for (; s[i] != '\0'; i++)
	{
		len += 1;
	}

	i = 0;
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
