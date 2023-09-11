#include "main.h"

/**
 * _pow_recursion - calculates the power of a number
 * @x: base number
 * @y: power number
 * Return: x raised to the power y, otherwise -1 is @y is lower than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
