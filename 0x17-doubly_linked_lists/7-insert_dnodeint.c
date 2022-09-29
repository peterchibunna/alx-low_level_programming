#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts @n at the @idx index of @h
 * @h: head of a linked list
 * @idx: where to insert data
 * @n:
 *  data to insert
 *  Return: the modified list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *copy, *current, *next;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	copy = malloc(sizeof(dlistint_t));
	if (copy == NULL)
		return (NULL);
	if (idx != 0)
	{
		current = *h;
		for (i = 0; i < idx - 1 && current != NULL; i++)
			current = current->next;
		if (current == NULL)
			return (NULL);
	}

	copy->n = n;
	if (idx == 0)
	{
		next = *h;
		*h = copy;
		copy->prev = NULL;
	}
	else
	{
		copy->prev = current;
		next = current->next;
		current->next = copy;
	}

	copy->next = next;
	if (copy->next != NULL)
		copy->next->prev = copy;
	return (copy);
}
