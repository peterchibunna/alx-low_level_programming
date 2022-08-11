#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees a list from memory
 * @head: Address of list's head
 **/
void free_list(list_t *head)
{
	list_t *tmp1, *tmp2;

	tmp1 = head;
	while (tmp1 != NULL)
	{
		tmp2 = tmp1->next;
		free(tmp1->str);
		free(tmp1);
		tmp1 = tmp2;
	}
}
