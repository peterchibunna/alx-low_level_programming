#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function description
 * @s1: param 1
 * @s2: param 2
 * @n: param 3 ...
 *
 * Return: NULL if fail else the pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int s1_length = 0, s2_length = 0, k = 0;

	if (s1 != NULL)
		for (; s1[s1_length]; s1_length++)
		;
	if (s2 != NULL)
		for (; s2[s2_length]; s2_length++)
		;
	if (n >= s2_length)
		s = malloc(sizeof(char) * (s1_length + s2_length + 1));
	else
	{
		s = malloc(sizeof(char) * (s1_length + n + 1));
		s2_length = n;
	}
	if (s == NULL)
		return (NULL);

	for (; k < s1_length; k++)
	{
		s[k] = s1[k];
	}

	for (; k < s1_length + s2_length; k++)
	{
		s[k] = s2[k - s1_length];
	}

	s[k] = '\0';
	return (s);
}
