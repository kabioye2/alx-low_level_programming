#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 * Return: 0 if successful, 98 for invalid argument count, 99 for invalid
 * operator, or 100 for division by zero
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int calc;
	char *operator;
	int (*func_ptr)(int, int);

	if (argc != 4)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}

	num1 = atoi(argv[1]);
        num2 = atoi(argv[3]);
	operator = argv[2];
	func_ptr = get_op_func(operator);

	if (strlen(operator) != 1 || func_ptr == NULL)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(99);
	}

	if ((*operator == '/' || *operator == '%') && num2 == 0)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(100);
	}

	calc = func_ptr(num1, num2);
	printf("%d\n", calc);

	return (0);
}
