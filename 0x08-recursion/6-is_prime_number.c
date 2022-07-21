#include "main.h"
/**
 * is_prime_number - checks if a number is prime
 * @n: number to check
 * Return: 1 if prime or 0 if not prime
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (test_prime(n, n / 2) > 0)
	{
		return (1);
	}
	return (0);
}

/**
 * test_prime - checks for prime
 * @n: input to check
 * @i: n / 2, then passes to i - 1, checks if greater than 0
 * Return: prime check
 */
int test_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (test_prime(n, i - 1));
	}
}
