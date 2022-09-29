#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - returns the number of elements of a list
 * @h: the linked list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *copy = h;
	size_t node_size = 0;

	while (copy != NULL)
	{
		copy = copy->next;
		node_size++;
	}

	return (node_size);
}
