#include "lists.h"

/**
 * find_listint_loop - Find the loop in a linked list
 * @head: head of the list
 *
 * Return: teh address of the node where the loop starts or NULL
 *           if there is no loop
 **/
listint_t *find_listint_loop(listint_t *head)
{

	while (head != NULL)
	{
		if (head <= head->next)
		{
			return (head);
		}

		head = head->next;
	}

	return (NULL);
}
