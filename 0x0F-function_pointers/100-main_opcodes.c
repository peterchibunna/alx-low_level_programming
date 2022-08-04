#include <stdlib.h>
#include <stdio.h>
#include "print_opcodes.c"
/**
 * main - Print the opcodes of this main function
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 always.
 */
int main(int argc, char **argv)
{
	int x;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	x = atoi(argv[1]);
	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, x);
	return (0);
}
