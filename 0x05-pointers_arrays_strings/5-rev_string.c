#include "main.h"
/**
 * rev_string - code definition
 * @s: The string parameter
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	int len = 0;

	for (; s[i] != '\0'; i++)
	{
		/*_putchar(s[i]);*/
		len += 1;
	}
	_putchar('\n');

	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
