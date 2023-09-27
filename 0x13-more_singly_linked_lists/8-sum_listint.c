#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sum all data in list
 * @head: pointer to head node
 * Return: sum of data
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *curr;

	sum = 0;
	curr = head;
	if (head == NULL)
	{
		return (sum);
	}
	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
