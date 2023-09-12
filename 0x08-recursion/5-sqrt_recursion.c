#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - calculates natural square root of a number
 * @n: number to be squared
 * Return: natural square root of @n, otherwise -1
 */

/**
 * _sqrt_recursion_srch - helper function to sqrt function
 * @n: number to be squared
 * @r: guess root for number
 * Return: natural square root of @n, otherwise -1
 */

int _sqrt_recursion_srch(int n, int r)
{
	if ((r * r) > n)
	{
		return (-1);
	}
	else if ((r * r) == n)
	{
		return (r);
	}
	else
	{
		return (_sqrt_recursion_srch(n, r + 1));
	}
}

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

	return (_sqrt_recursion_srch(n, 0));
}
