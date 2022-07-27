#include <stdio.h>
/**
 * main - function description
 * @argc: arguments count.
 * @argv: arguments vector
 * Return: Success always
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
