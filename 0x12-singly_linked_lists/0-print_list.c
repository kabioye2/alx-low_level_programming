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
	_putchar('l');
	_putchar(')');
	_putchar('\n');
}

/**
 * print_list - prints all the elements of a list_t list
 * @h: list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			void print_null(void);
		}
		else
		{
			_putchar('[');
			_putchar(h->len + '0');
			_putchar(']');
			_putchar(' ');
			for (unsigned int i = 0; h->str[i] != '\0'; i++)
			{
				_putchar(h->str[i]);
			}
		}
		_putchar('\n');
		count++;
		h = h->next;
	}
	_putchar('-');
	_putchar('>');
	_putchar(' ');
	_putchar(node_count + '0');
	_putchar(' ');
	_putchar('e');
	_putchar('l');
	_putchar('e');
	_putchar('m');
	_putchar('e');
	_putchar('n');
	_putchar('t');
	_putchar('s');
	_putchar('\n');
	return (node_count);
}
