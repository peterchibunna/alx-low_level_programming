#include "lists.h"

/**
 * add_nodeint - fxn that adds a new node at the beginning of a listint_t list
 * @head: head of the list
 * @n: Value of the new element
 *
 * Return: The address of the new node
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_list;

	if (head == NULL)
	{
		return (NULL);
	}

	new_list = malloc(sizeof(listint_t));
	if (new_list== NULL)
	{
		return (NULL);
	}

	new_list->n = n;
	new_list->next = *head;
	*head = new_list;

	return (new_list);
}
