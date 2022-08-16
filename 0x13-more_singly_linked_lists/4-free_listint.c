#include "lists.h"

/**
 * free_listint - Free a listint_t list
 * @head: head of the list
 **/
void free_listint(listint_t *head)
{
	listint_t *tmp;

	for (; head != NULL;)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}

}
