#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number
 * Return: last digit of a number
 */

int print_last_digit(int n)
{
	int last;

	last = abs(n) % 10;
	_putchar('0' + last);
	return (last);
}
