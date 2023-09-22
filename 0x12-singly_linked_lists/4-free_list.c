#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_list - frees a list
 * @head: pointer to head of list
 */

void free_list(list_t *head)
{
	list_t *curr;

	if (head == NULL)
	{
		return;
	}

	while (head != NULL)
	{
		curr = head;
		head = head->next;
		free(curr->str);
		free(curr);
	}
}
