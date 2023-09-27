#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes node in list at a given index
 * @head: pointer to pointer of head
 * @index: position to place node
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *temp;
	unsigned int i;

	i = 0;
	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	curr = *head;
	while (curr != NULL && i < index)
	{
		if (i == (index - 1))
		{
			temp = curr->next;
			curr->next = temp->next;
			free(temp);
			return (1);
		}
		curr = curr->next;
		i++;
	}
	return (-1);
}
