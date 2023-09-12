#include "main.h"

/**
 * divisor - helper function
 * @n: prime number
 * @d: divisor
 * Return: 1 if prime number, otherwise 0
 */

int divisor(int n, int d)
{
	if (d == 1)
	{
		return (0);
	}

	if (n % divisor == 0)
	{
		return (1);
	}

	return divisor(n, d - 1);
}

/**
 * is_prime_number - find out if number is prime
 * @n: prime number
 * Return: 1 if prime number, otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	if (n == 2)
	{
		return (1);
	}

	return (divisor(n, n - 1));
}
