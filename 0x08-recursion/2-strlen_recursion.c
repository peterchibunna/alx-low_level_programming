#include "main.h"

/**
 * _strlen_recursion - function description
 * @s: string to use.
 * Return: the length if @s
 */

int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}

	return (0);
}
