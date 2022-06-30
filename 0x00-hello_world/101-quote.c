#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 * Description: Print without fputs, printf, etc
 * Return: Always 1 (Failure)
 */
int main(void)
{
	char quote[] = "and that piece of art is ";
	char quote2[] = "useful\" - Dora Korpar, 2015-10-19\n";
	fwrite(strcat(quote, quote2), 59, 1, stderr);

	return (1);
}
