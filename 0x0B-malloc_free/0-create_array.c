#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes
 *				  it with a specific char
 * @size: size of arrray.
 * @c: char parameter
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *alloc = malloc(size * sizeof(char));
	unsigned int i;

	if (size != 0 && alloc != NULL)
	{
		for (i = 0; i < size; i++)
		{
			alloc[i] = c;
		}

		return (alloc);
	}
	else
	{
		return (NULL);
	}
}
