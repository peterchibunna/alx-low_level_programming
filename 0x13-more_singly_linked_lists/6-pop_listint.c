#include "lists.h"

/**
 * pop_listint - Delete the head node of a listint_t linked list
 * @head: head of the list
 *
 * Return: head node’s data (n)
 **/
int pop_listint(listint_t **head)
{
	int tmp1;
	listint_t *tmp2;

	if (*head == NULL)
	{
		return (0);
	}

	tmp2 = (*head)->next;
	tmp1 = (*head)->n;
	free(*head);
	*head = tmp2;

	return (tmp1);
}
