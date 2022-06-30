#include <stdio.h>

/**
 * main - Entry point
 * Description: Print without fputs, printf, etc
 * Return: Always 1 (Failure)
 */
int main(void)
{
	fwrite("and that piece of art is useful\" - " +
	"Dora Korpar, 2015-10-19\n", 58, 1, stderr);
	return (1);
}
