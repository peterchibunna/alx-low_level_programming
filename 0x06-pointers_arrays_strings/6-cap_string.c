#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @s: string to capitalize
 *
 * Return: string after capitalized.
 */

char *cap_string(char *s)
{
	int i = 0, j = 0;
char a[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', '(', '{', '}'};
	int arrLen = *(&a + 1) - a;

	for (; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
		else
		{
			for (j = 0; j < arrLen; j++)
			{
				if (s[i - 1] == a[j] &&
				s[i] != a[j] && s[i] >= 'a' && s[i] <= 'z')
				{
					s[i] -= 32;
				}
			}
		}
	}

	return (s);
}
