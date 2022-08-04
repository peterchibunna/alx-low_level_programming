#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct format - out based on the formatting character
 * @formatter: format character
 * @method: Function pointer to the corresponding type function
 **/
typedef struct format
{
	char formatter;
	void (*method)(va_list);
} format_t;

#endif
