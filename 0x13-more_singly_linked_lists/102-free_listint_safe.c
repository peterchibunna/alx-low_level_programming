#include "lists.h"
/**
 * free_listint_safe - Frees a listint_t list
 * @head: head of the list
 *
 * Return: Return the size that was free'd
 **/
size_t free_listint_safe(listint_t **head)
{
	int i;
	listint_t *tmp;

	for (i = 0; *head != NULL; i++)
	{
		if (*head <= (*head)->next)
		{
			tmp = (*head)->next;
			free(*head);
			i++;
			break;
		}

		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	*head = NULL;
	return (i);
}
