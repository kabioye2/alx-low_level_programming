#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_null - print nill for null string
 */

void print_null(void)
{
	_putchar('[');
	_putchar('0');
	_putchar(']');
	_putchar(' ');
	_putchar('(');
	_putchar('n');
	_putchar('i');
	_putchar('l');
	_putchar(')');
}

/**
 * print_list - prints all the elements of a list_t list
 * @h: list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int i;
	int count;

	count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			print_null();
		}
		else
		{
			_putchar('[');
			_putchar(h->len + '0');
			_putchar(']');
			_putchar(' ');
			for (i = 0; h->str[i] != '\0'; i++)
			{
				_putchar(h->str[i]);
			}
		}
		_putchar('\n');
		count++;
		h = h->next;
	}
	return (count);
}
