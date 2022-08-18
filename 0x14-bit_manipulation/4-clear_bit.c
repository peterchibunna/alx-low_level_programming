#include "main.h"

/**
 * clear_bit - set the value of a bit at a given index to 0
 * @n: A pointer to the bit
 * @index: The index to set the value at - indices start at 0
 *
 * Return: -1 If an error occurs Otherwise 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if ((sizeof(unsigned long int) * 8) <= index)
	{
		return (-1);
	}

	*n &= ~(1 << index);

	return (1);
}
