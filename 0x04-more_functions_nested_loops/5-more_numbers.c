#include "main.h"

/**
 * more_numbers - prints the numbers, from 0 to 14 ten times
 */

void more_numbers(void)
{
	int i;
	int j;

	j = 0;
	while (j < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if ( i > 9)
			{
				_putchar('0' + (i / 10));
			}
			_putchar('0' + (i % 10));
		}
		_putchar('\n');
		j++;
	}
}
