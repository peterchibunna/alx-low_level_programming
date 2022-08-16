#include "lists.h"
/**
 * sum_listint - sum of all the data (n) of a listint_t linked list
 * @head: head of the list
 *
 * Return: the computed sum
 **/
int sum_listint(listint_t *head)
{
	int total = 0;

	for (; head != NULL; head = head->next)
	{
		total += head->n;
	}

	return (total);
}
