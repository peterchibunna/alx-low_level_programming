#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list
 * @h: head of the list
 *
 * Return: number of elements
 **/
size_t listint_len(const listint_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		size++;
		h = h->next;
	}


	return (size);
}
