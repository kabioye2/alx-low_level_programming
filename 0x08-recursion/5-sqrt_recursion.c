#include "main.h"

/**
 * _sqrt_recursion - calculates natural square root of a number
 * @n: number to be squared
 * Return: natural square root of @n, otherwise -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}

	return (_sqrt_recursion(n, 0, n));
}
