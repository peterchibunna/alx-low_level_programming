#include "main.h"
/**
 * rev_string - code definition
 * @s: The string parameter
 */
void rev_string(char *s)
{
	int i = 0;
	int len = 0;

	for (; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
		len += 1;
	}
	_putchar('\n');

	i = 0;
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
