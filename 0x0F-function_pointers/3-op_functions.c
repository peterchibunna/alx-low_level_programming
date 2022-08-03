#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Addition operation
 * @a: First number
 * @b: Second number
 * Return: sum
 **/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Substraction operation
 * @a: First number
 * @b: Second number
 * Return: difference
 **/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplication operation
 * @a: First number
 * @b: Second number
 * Return: product
 **/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Division operation
 * @a: First number
 * @b: Second number
 * Return: quotient
 **/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - "remainder after division" operation
 * @a: First number
 * @b: Second number
 * Return: modulus
 **/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
