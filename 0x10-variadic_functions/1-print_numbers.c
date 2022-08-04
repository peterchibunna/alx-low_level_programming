#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers
 * @separator: Separator between numbers
 * @n: total of arguments
 **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	int num;

	va_start(args, n);
	for (; i < n ; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
