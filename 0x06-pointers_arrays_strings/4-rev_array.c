#include "main.h"
/**
 *reverse_array - function description.
 *@a: array.
 *@n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i, j;
	int current_element;

	j = --n; /*decrement n and assign to j */
	while (i < n / 2)
	{
		current_element = a[i];
		a[i] = a[j];
		a[j] = current_element;
		j--;
		i++;
	}
}
