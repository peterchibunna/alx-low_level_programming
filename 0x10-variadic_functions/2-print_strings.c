#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - Prints strings
 * @separator: Separator between strings? words?
 * @n: total of strings
 **/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	char *word;

	va_start(args, n);
	for (; i < n ; i++)
	{
		word = va_arg(args, char *);
		if (word != NULL)
		{
			printf("%s", word);
		}
		else
		{
		printf("(nil)");
		}
		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
