#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint -- add new node at beginning of list
 * @head: pointer to pointer to address of head node
 * @n: element
 * Return: address of new element or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
