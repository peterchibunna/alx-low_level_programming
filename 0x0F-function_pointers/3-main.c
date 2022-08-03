#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Perform an operation on 2 numbers.
 * @argc: Number of arguments
 * @argv: Arguments vector
 * Return: 0 always after operation
 **/

int main(int argc, char *argv[])
{
	int a, b, result;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = f(a, b);
	printf("%d\n", result);
	return (0);
}
