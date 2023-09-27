#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: pointer to head of node
 * @index: index of node starting at 0
 * Return: nth node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	temp = head;
	for (i = 0; temp != NULL; i++)
	{
		if (i == index)
		{
			return (temp);
		}
		temp = temp->next;
	}
	return (NULL);
}
