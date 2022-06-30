#include <stdio.h>

/**
 * main - Entry point
 * Description: Print without fputs, printf, etc
 * Return: Always 1 (Failure)
 */
int main(void)
{
	fwrite(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 39, 1, stderr);
	return (1);
}
