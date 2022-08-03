#include "function_pointers.h"
/**
 * print_name - Calls another function to print name
 * @name: String parameter
 * @f: Function as a prameter
 **/
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
	{
		f(name);
	}
}
