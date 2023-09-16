#include "main.h"

/**
 * times_table -  prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int i;
	int j;
	int product;

	i = 0;
	j = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			product = i * j;
			if (product < 10)
			{
				if (j == 9)
				{
					_putchar(' ');
				}
				_putchar('0' + product);
			}
			else
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}

			if (j < 9)
			{
				if (product < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
