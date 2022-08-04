#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - Print the opcodes
 * @s: Address of the main function.
 * @x: Number of bytes to print.
 **/
void print_opcodes(char *s, int x)
{
	int i = 0;

	for (; i < x; i++)
	{
		printf("%.2hhx", s[i]);
		if (i < x - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}
