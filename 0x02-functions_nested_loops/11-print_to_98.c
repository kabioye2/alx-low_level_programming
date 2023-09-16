#include "main.h"

/**
 * print_to_98 - print to 98
 * @n: integer
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if (i < 10)
		{
			_putchar('0' + n);
		}
		else
		{
			_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));
		}

		if (i != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
