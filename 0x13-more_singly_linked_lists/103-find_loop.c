#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list
 *
 * Return: the address of the node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *new_list;
	listint_t *prev;

	new_list = head;
	prev = head;
	while (head && new_list && new_list->next)
	{
		head = head->next;
		new_list = new_list->next->next;

		if (head == new_list)
		{
			head = prev;
			prev =  new_list;
			while (1)
			{
				new_list = prev;
				while (new_list->next != head && new_list->next != prev)
				{
					new_list = new_list->next;
				}
				if (new_list->next == head)
					break;

				head = head->next;
			}
			return (new_list->next);
		}
	}

	return (NULL);
}
