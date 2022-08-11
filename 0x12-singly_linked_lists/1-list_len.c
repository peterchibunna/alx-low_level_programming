#include "lists.h"

/**
 * list_len - Get the number of elements in a list
 * @h: the list to work on
 * Return: number of elements in the list
 **/

size_t list_len(const list_t *h)
{
	const list_t *tmp;
	unsigned int size = 0;

	tmp = h;
	while (tmp)
	{
		size++;
		tmp = tmp->next;
	}
	return (size);
}
