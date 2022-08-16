#include "lists.h"

/**
 * print_listint_safe - print a listint_t linked list
 * @head: head of the list
 *
 * Return: Numbers of elements of the list
 **/
size_t print_listint_safe(const listint_t *head)
{
	int i;

	if (head == NULL)
		return (0);

	for (i = 0; head != NULL; i++)
	{
		printf("[%p] %d\n", (void *) head, head->n);

		if (head <= head->next)
		{
			head = head->next;
			printf("-> [%p] %d\n", (void *) head, head->n);
			i++;
			return (i);
		}

		head = head->next;
	}

	return (i);
}
