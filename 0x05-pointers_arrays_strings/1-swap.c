#include "main.h"

/**
 * swap_int - check the code
 * @a: first pointer to swap
 * @b: second pointer to swap
 */

void swap_int(int *a, int *b)
{
	int *c = NULL, *d = NULL;

	*c = *a;
	*d = *b;

	*a = *d;
	*b = *c;
}
