#include <stdlib.h>

/**
* count_words - Count words in a string.
* @str: String address.
* Return: Number of words in a string (Integer).
*/

int count_words(char *str)
{
	int i = 0, words = 0;

	while (str[i] == ' ')
		i++;

	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (str[i + 1] == '\0' || str[i + 1] == ' '))
			words++;
		i++;
	}
	return (words);
}
