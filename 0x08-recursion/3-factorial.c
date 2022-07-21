#include "main.h"

/**
 * factorial - function: the factorial of a number
 * @n: the integer to use.
 * Return: the factorial of @n.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (factorial(n - 1) * n);
	}
}
