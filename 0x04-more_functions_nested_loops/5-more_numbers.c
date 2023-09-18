#include "main.h"

/**
 *_more_numbers - prints the numbers, from 0 to 14 ten times
 */

void more_numbers(void)
{
	int i;
	int j;

	j = 0;
	while (j < 10)
	{
		for (i = 0; i < 14; i++)
		{
			_putchar('0' + i);
		}
		_putchar('\n');
		j++;
	}
}
