#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the integer
 * Return: absolute value
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-1 * n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n);
	}
}
