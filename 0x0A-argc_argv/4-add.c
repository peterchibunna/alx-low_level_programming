#include <stdio.h>
#include <stdlib.h>
/**
 * main - function description
 * @argc: arguments count.
 * @argv: arguments vector
 * Return: Success always
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc <= 1)
	{
		sum = 0;
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] ; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
	}

	printf("%d\n", sum);
	return (0);
}
