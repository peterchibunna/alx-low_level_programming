#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - function description
 * @str: String Parameter
 * Return: pointer to the new allocated mem. space
 */

char *_strdup(char *str)
{
	int i;
	char *str_tmp;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
	}

	i++;
	str_tmp = malloc(sizeof(char) * i);

	if (str_tmp == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		str_tmp[i] = str[i];
	}

	str_tmp[i] = '\0';

	return (str_tmp);
}
