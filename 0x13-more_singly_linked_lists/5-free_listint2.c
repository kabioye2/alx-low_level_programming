#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_listint2 - frees a list
 * @head: pointer to head of list
 */

void free_listint2(listint_t **head)
{
	listint_t *curr;

	if (head == NULL || *head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		curr = *head;
		*head = (*head)->next;
		free(curr);
	}
	*head = NULL;
}
