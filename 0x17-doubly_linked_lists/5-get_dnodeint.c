#include "lists.h"
/**
 * get_dnodeint_at_index - gets the node of a linked list at the nth index
 * @head: the head of the linked list
 * @index: the index to check with
 * Return: the node at the nth index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int counter = 0;

	(void)counter;
	if (head == NULL)
		return (0);
	tmp = head;

	while (index != 0)
	{
		tmp = tmp->next;
		index -= 1;

		if (tmp == NULL)
			return (0);
	}
	return (tmp);
}
