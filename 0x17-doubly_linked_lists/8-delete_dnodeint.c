#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at the specified index
 * @head: the head of a linked list
 * @index: The index of interest
 * Return: 1 on SUCESS; -1 on FAILURE
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *copy;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	copy = *head;
	if (index == 0)
	{
		*head = copy->next;
		if (copy->next != NULL)
		{
			copy->next->prev = NULL;
		}
		free(copy);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (copy->next == NULL)
			return (-1);
		copy = copy->next;
	}
	copy->prev->next = copy->next;
	if (copy->next != NULL)
	{
		copy->next->prev = copy->prev;
	}
	free(copy);
	return (1);
}
