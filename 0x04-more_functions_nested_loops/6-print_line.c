#include "main.h"

/**
 * print_line - print lines
 * @n: number of lines to be printed
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while(n)
		{
			_putchar('_);
			n--;
		}
	}
}
