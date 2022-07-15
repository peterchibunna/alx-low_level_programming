#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @s: string to encode.
 * Return: the encoded string.
 */

char *leet(char *s)
{
	int i = 0, j = 0;
	char leet_characters[] = {'4', '3', '0', '7', '1'};
	char uppercases[] = {'A', 'E', 'O', 'T', 'L'};
	char lowercases[] = {'a', 'e', 'o', 't', 'l'};

	int leet_size = *(&leet_characters + 1) - leet_characters;

	for (; s[i] != '\0'; i++)
	{
		for (j = 0; j < leet_size; j++)
		{
			if (s[i] == lowercases[j] || s[i] == uppercases[j])
			{
				s[i] = leet_characters[j];
			}
		}
	}


	return (s);
}
