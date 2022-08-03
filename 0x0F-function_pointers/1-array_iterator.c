#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - execute a function on eacharray element
 * @array: The array with elements
 * @size: size of the array
 * @action: function to execute on the array elements
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a = 0;

	if (array && action)
	{
		for (a = 0; a < size; a++)
		{
			action(array[a]);
		}
	}
}
