#include "main.h"



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

	if (n % (n - 1) == 0)
	{
		return (0);
	}

	return (is_prime_number(n - 1));
}
