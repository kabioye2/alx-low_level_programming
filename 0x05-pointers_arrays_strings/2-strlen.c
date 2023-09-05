#include "main.h"

/**
 * _strlen - calculate the length of a string
 * @s: string
 * Return: string length
 */

int _strlen(char *s)
{
	int i;
	int count;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
