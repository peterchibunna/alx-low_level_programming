#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments.
 * @av: pointer to arguments vector.
 * Return: pointer to concatenated string.
 */

char *argstostr(int ac, char **av)
{
	char *joined_str;
	int i, j, len = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
	}

	joined_str = malloc(1 + sizeof(char) * len + ac);
	if (joined_str == NULL)
	{
		return (NULL);
	}

	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			joined_str[len] = av[i][j];
			len++;
		}
		joined_str[len] = '\n';
		len++;
	}
	joined_str[len] = '\0';

	return (joined_str);
}
