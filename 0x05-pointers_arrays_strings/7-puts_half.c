#include "main.h"
/**
 * puts_half - function description
 * @str: parameter
 */
void puts_half(char *str)
{
	int len, new_len, i;

	for (len = 0; str[len] != '\0'; len++)
	{
	}

	if (len % 2 == 0)
	{
		new_len = len / 2;
	}
	else
	{
		new_len = (len - 1) / 2;
	}

	if (len % 2 == 0)
	{
		for (i = new_len; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = new_len + 1; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
