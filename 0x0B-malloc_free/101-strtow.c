#include "main.h"
#include <stdlib.h>
#include "count_words.c"
/**
 * strtow - function description
 * @str: String address.
 * Return: pointer to array of strings
 */
char **strtow(char *str)
{
	char **tab;
	int num_words, i = 0, j, c = 0, k;

	num_words = count_words(str);
	if (num_words == 0)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (tab == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
			;
			tab[c] = (char *)malloc((j + 1) * sizeof(char));
			if (tab[c] == NULL)
			{
				for (k = 0; k < c; k++)
					free(tab[k]);
				free(tab);
				return (NULL);
			}
			for (k = 0; k < j; k++)
				tab[c][k] = str[i + k];
			tab[c][k] = '\0';
			c++;
			i += j;
		}
		else
			i++;
	}
	tab[num_words] = NULL;
	return (tab);
}
