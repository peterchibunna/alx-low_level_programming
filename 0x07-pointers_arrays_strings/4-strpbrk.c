#include "main.h"

/**
 * _strpbrk - function description
 * @s: the first string.
 * @accept: the second string.
 * Return: char.
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	for (; s[i]; i++)
	{
		for (; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				return (s + i);
			}
		}
	}

	return (0);
}
