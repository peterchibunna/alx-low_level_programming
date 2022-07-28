#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function description
 * @b: param 1
 * Return: pointer;
 **/

void *malloc_checked(unsigned int b)
{
	void *s = malloc(b);

	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
