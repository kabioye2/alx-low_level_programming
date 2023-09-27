#include "main.h"
#include <unistd.h>

/**
 * _islower - Checks if a character is lowercase
 *
 * @c: The character to check
 *
 * Return: 1 if @c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}