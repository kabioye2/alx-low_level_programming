#include <stdio.h>

int _sqrt_recursion(int n, int low, int high)
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
		return (_sqrt_recursion(n, mid + 1, high));
	}
	else
	{
		return (_sqrt_recursion(n, low, mid - 1));
	}
}
