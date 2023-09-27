#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - adds node to list at a given index
 * @head: pointer to pointer of head
 * @idx: position to place node
 * @n: data for node
 * Return: address of node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *curr;
	unsigned int i;

	i = 0;
	if (head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	curr = *head;
	while (curr != NULL && i < idx)
	{
		if (i == (idx - 1))
		{
			new->next = curr->next;
			curr->next = new;
			return (new);
		}
		curr = curr->next;
		i++;
	}
	free(new);
	return (NULL);
}
