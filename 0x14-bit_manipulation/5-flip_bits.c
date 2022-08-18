#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get
 *				from one number to another.
 * @n: parameter 1
 * @m: parameter 2
 *
 * Return: The necessary number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int b = 0, x = n ^ m;

	while (x > 0)
	{
		b += (x & 1);
		x >>= 1;
	}

	return (b);
}
