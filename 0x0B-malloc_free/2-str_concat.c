#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - function description
 * @s1: String Parameter
 * @s2: string
 * Return: pointer to the new allocated mem. space
 */

char *str_concat(char *s1, char *s2)
{
	char *alloc;
	int i = 0, j = 0, k = 0;

	if (s1 != NULL)
	{
		for (; s1[i]; i++)
		{
		}
	}
	if (s2 != NULL)
	{
		for (; s2[j]; j++)
		{
		}
	}

	alloc = malloc(sizeof(char) * (i + j + 1));

	if (alloc == NULL)
	{
		return (NULL);
	}

	while (k < i)
	{
		alloc[k] = s1[k];
		k++;
	}

	while (k < i + j)
	{
		alloc[k] = s2[k - i];
		k++;
	}
	alloc[k] = '\0';

	return (alloc);
}
