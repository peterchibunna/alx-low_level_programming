#include "lists.h"
/**
 * sum_dlistint - find sum of elements in the list
 * @head: head of linked list
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *this;
	dlistint_t *next;
	int sum = 0;

	this = head;

	while (this != NULL)
	{
		next = this->next;
		sum = sum + this->n;
		this = next;
	}
	return (sum);
}
