#include "lists.h"
#include <stdio.h>
#include <stdlib.h> /* because we're calling malloc */
/**
 * add_dnodeint - adds a new node at the beginning of a d.. list
 * @head: pointer to pointer of the list's beginning
 * @n: integer value to add to head
 * Return: pointer to new node or NULL if add fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp_list;

	if (head == NULL)
		return (NULL);
	tmp_list = malloc(sizeof(dlistint_t));
	if (tmp_list == NULL)
		return (NULL);
	/* add the int to the data of the d-l-l*/
	tmp_list->n = n;
	/* set the prev to NULL so that it becomes the head */
	tmp_list->prev = NULL;
	/* push the pointer to pointer of our list to the end of the node */
	tmp_list->next = *head;

	/* point our tmp_list to the pointer of the pointer of the d-l-l*/
	*head = tmp_list;

	if (tmp_list->next != NULL)
	{
		/*this is where the `magic' happens to ensure that the */
		/* tail of the list is not empty */
		(tmp_list->next)->prev = tmp_list;
	}
	return (tmp_list);


}
