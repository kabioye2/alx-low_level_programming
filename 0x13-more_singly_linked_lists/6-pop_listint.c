#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * pop_listint - deletes head node and returns data
 * @head: pointer to pointer of head node
 * Return: 0 or head node data
 */

int pop_listint(listint_t **head)
{
	listint_t *curr;
	int data;

	if (*head == NULL)
	{
		return (0);
	}
	curr = *head;
	*head = (*head)->next;
	data = curr->n;
	free(curr);
	return (data);
}
