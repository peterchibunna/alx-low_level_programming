#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a d.. list
 * @head: pointer to pointer of the list's beginning
 * @n: integer value to add to head
 * Return: pointer to new node or NULL if add fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp_list1, *tmp_list2;

	if (head == NULL)
		return (NULL);
	tmp_list1 = malloc(sizeof(dlistint_t));
	if (tmp_list1 == NULL)
		return (NULL);
	/* add the int to the data of the d-l-l*/
	tmp_list1->n = n;
	/* set the next to NULL so that it becomes the end */
	tmp_list1->next = NULL;
	/*tmp_list1->prev = *head; // segmentation fault*/
	tmp_list1->prev = *head;
	if (*head == NULL)
	{
		tmp_list1->prev = NULL;
		*head = tmp_list1;
		return (tmp_list1);
	}
	/* point our tmp_list to the pointer of the pointer of the d-l-l*/
	tmp_list2 = *head;

	while (tmp_list2->next != NULL)
	{
		tmp_list2 = tmp_list2->next;
	}

	/* link the nodes: the tail to the tmp_list1, */
	/* link the nodes head to tmp_list2; */
	tmp_list2->next = tmp_list1;
	tmp_list1->prev = tmp_list2;

	return (tmp_list1);


}
