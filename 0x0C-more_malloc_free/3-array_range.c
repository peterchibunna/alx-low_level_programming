#include "main.h"
#include <stdlib.h>

/**
 * array_range - function description
 * @min: min value
 * @max: max value
 *
 * Return: NULL if min > max or the function fails
 *         Else - a pointer to the newly created mem
 */
int *array_range(int min, int max)
{
	int *mem, i, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;

	mem = malloc(sizeof(int) * size);

	if (mem == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		mem[i] = min++;
	}
	return (mem);
}
