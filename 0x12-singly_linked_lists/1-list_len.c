#include <stddef.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
