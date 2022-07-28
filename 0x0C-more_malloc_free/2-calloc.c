#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function description
 * @nmemb: param 1
 * @size: param 2
 * Return: conditional returns
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *tmp;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	mem = malloc(size * nmemb);

	if (mem == NULL)
	{
		return (NULL);
	}

	tmp = mem;

	for (i = 0; i < (size * nmemb); i++)
	{
		tmp[i] = '\0';
	}

	return (mem);
}
