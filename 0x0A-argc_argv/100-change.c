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
	int i = 0, cents, coins = 0;
	int coin_values[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents <= 0)
	{
		printf("0\n");
		return (0);
	}

	for (; i < 5; i++)
	{
		if (cents)
		{
			coins += cents / coin_values[i];
			cents %= coin_values[i];
		}
	}

	printf("%d\n", coins);
	return (0);
}
