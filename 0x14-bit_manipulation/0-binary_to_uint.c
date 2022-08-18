#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Convert a binary number to an unsigned int
 * @b: The string of 0 and 1 chars
 *
 * Return: Converted number
 **/
unsigned int binary_to_uint(const char *b)
{
	int and_er, i;
	unsigned int number;

	if (b == NULL)
		return (0);

	for (i = number = 0; b[i] != 0; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (number);
	}

	for (i -= 1, and_er = 0; i >= 0; i--, and_er++)
	{
		if (b[i] == '0')
			continue;

		number += 1 << and_er;
	}

	return (number);
}
