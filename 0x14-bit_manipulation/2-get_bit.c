#include "main.h"
/**
 * get_bit - set the value of a bit to 1 at a given index
 * @n: Number base
 * @index: Index to get
 *
 * Return: Return 1 if it worked, or -1 if an error occurred
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	if ((n & (1 << index)) == 0)
	{
		return (0);
	}

	return (1);
}
