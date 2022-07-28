#include <stdio.h>
#include <stdlib.h>
/**
 * main - function description
 * @argc: arguments count.
 * @argv: arguments vector
 * Return: Something
 */
int main(int argc, char *argv[])
{
	int a, b, i, j;
	char *eptr;
	unsigned long result;

	if (argc == 3)
	{
		i = 1;
		for (j = 0; argv[i][j] ; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				exit(98);
			}
		}

		i = 2;
		for (j = 0; argv[i][j] ; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				exit(98);
			}
		}

		a = strtoul(argv[1], &eptr, 10);
		b = strtoul(argv[2], &eptr, 10);

		result = a * b;

		printf("%lu\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
}
