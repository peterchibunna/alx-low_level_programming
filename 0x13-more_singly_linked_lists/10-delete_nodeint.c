#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index index of a
 * listint_t linked list
 * @head: Reference to the start of the list
 * @index: Index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if succeeded, -1 if it failed
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	int i = 0;
	listint_t *tmp;

	while (*head != NULL)
	{
		if (i == (int) index)
		{
			tmp = (*head)->next;
			free(*head);
			*head = tmp;
			return (1);
		}

		head = &(*head)->next;
		i++;
	}

	return (-1);
}
