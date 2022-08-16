#include "lists.h"

/**
 * add_nodeint_end - fxn that adds a new node at the end of a listint_t list
 * @head: head of the list
 * @n: Value of the new element
 *
 * Return: Adrress of the new element
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_list;

	if (head == NULL)
		return (NULL);

	new_list = malloc(sizeof(listint_t));
	if (new_list == NULL)
		return (NULL);

	for (; *head != NULL; head = &(*head)->next)
	{
	}
	new_list->n = n;
	new_list->next = NULL;
	*head = new_list;

	return (new_list);
}
