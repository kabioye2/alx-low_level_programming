#include "main.h"
#include <unistd.h>

/**
 * _isalpha - Checks for a character
 *
 * @c: The character to check
 *
 * Return: 1 for @c, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
