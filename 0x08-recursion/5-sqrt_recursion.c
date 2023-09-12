#include "main.h"

/**
 * _sqrt_recursion - calculates natural square root of a number
 * @n: number to be squared
 * Return: natural square root of @n, otherwise -1
 */

int _sqrt_recursion(int n)
{
	int approx;
	int next_approx;


	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}

	approx = n / 2;
	next_approx = (approx + n / approx) / 2;

	if (next_approx == approx) 
	{
		return approx;
	}

	return _sqrt_recursion(next_approx); 
}
