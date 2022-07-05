#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Prints natural numbers from n to 98
 * @x: The number to start the loop from
 */
void print_to_98(int x)
{
	if (x == 98)
	{
		printf("%d\n", x);
	}
	else if (x > 98)
	{
		for (; x > 98; x--)
		{
			printf("%d, ", x);
		}
		printf("98\n");
	}
	else if (x < 98)
	{
		for (; x < 98; x++)
		{
			printf("%d, ", x);
		}
		printf("98\n");
	}
}
