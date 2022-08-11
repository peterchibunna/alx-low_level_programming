#include <stdlib.h>
#include "lists.h"
/**
 * add_node - Add a new node at the start of a list
 * @head: Address of first node of the list
 * @str: Address of the string to insert
 * Return: Address of the new node
 **/
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp_list;
	unsigned int length = 0;

	tmp_list = malloc(sizeof(list_t));
	if (tmp_list == NULL)
		return (NULL);

	while (str[length])
		length++;

	tmp_list->str = strdup(str);
	tmp_list->len = length;
	tmp_list->next = *head;
	*head = tmp_list;
	return (*head);
}

