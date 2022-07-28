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

		a = atoi(argv[1]);
		b = atoi(argv[2]);

		printf("%d\n", a * b);
		return (0);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
}
