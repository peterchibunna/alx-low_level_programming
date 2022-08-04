#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - Print char
 * @c: parameter to be printed
 **/
void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_integer - Print int
 * @i: parameter to be printed
 **/
void print_integer(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_float - Print float
 * @f: parameter to be printed
 **/
void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_string - Print string
 * @s: parameter to be printed
 **/
void print_string(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
	{
		str = "(nil)";
	}
	printf("%s", str);
}

/**
 * print_all - print all types of parameter
 * @format: A list of types of arguments
 **/

void print_all(const char * const format, ...)
{
	format_t s[] = {
		{'c', print_char},
		{'i', print_integer},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};
	unsigned int i = 0, j;
	char *separator = "";
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (s[j].formatter != '\0')
		{
			if (s[j].formatter == format[i])
			{
				printf("%s", separator);
				s[j].method(args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
}
