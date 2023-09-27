#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to the pointer to the head of the linked list.
 *
 * Return: Pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *next;

	prev = NULL;
	next = NULL;
	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;

		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}

