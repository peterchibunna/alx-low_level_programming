#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to pointer of a head of list
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *this, *nxt;

	this = head;
	while (this != NULL)
	{
		nxt = this->next;
		free(this);
		this = nxt;
	}
}
