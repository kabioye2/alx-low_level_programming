#include "main.h"

/**
 * factorial - calculates factorial of a given number
 * @n: given number
 * Return: -1 if n is less than 0, otherwise the factorial
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}

	if (n < 0)
	{
		return (-1);
	}

	return (n * factorial(n - 1));
}
