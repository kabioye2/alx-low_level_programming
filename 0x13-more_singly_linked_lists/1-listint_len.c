#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * listint_len - prints all the elements of a list
 * @h: head node
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
