#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - prints elements of a list
 * @h: the linked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *copy = h;
	size_t node_size = 0;

	while (copy != NULL)
	{
		printf("%d\n", copy->n);
		copy = copy->next;
		node_size++;
	}

	return (node_size);
}
