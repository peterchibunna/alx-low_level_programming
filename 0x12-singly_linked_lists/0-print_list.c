#include "lists.h"
#include <stdio.h>
/**
 * print_list - Print elements of a singly linked list
 * @h: Pointer to a list
 * Return: number of elements in @h
 **/
size_t print_list(const list_t *h)
{
	const list_t *tmp;
	unsigned int size = 0;

	tmp = h;
	while (tmp)
	{
		if (tmp->str == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", tmp->len, tmp->str);
		size++;
		tmp = tmp->next;
	}
	return (size);
}

