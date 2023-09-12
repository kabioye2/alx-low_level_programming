#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - calculates natural square root of a number
 * @n: number to be squared
 * Return: natural square root of @n, otherwise -1
 */

int _sqrt_recursion_srch(int n, int low, int high)
{
	int mid;
	int square;

	if (low > high)
	{
		return (-1);
	}

	mid = low + (high - low) / 2;
	square = mid * mid;

	if (square == n)
	{
		return (mid);
	}
	else if (square < n)
	{
		return (_sqrt_recursion_srch(n, mid + 1, high));
	}
	else
	{
		return (_sqrt_recursion_srch(n, low, mid - 1));
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

	return (_sqrt_recursion_srch(n, 0, n));
}
