#include "main.h"
#include <unistd.h>

/**
 * _isdigit - Checks if input is digit
 *
 * @c: The digit to check
 *
 * Return: 1 if @c is digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
