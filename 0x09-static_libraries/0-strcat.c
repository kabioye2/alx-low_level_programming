#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: a pointer to the resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int len;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}

	dest[len + i] = '\0';

	return (dest);
}
