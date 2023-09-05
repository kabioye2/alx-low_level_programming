#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * main - prints the numbers, from 0 to 9
 */

void print_numbers(void)
{
	char i;

	i = '0';

	while (i < '10')
	{
		_putchar(i);
		i++;
	}

	_putchar('\n');
}
