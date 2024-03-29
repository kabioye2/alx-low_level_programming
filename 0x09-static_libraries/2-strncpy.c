#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: first string
 * @src: second string
 * @n: bytes of second string
 * Return: a pointer to the resulting string @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int len;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	if (len < n)
	{
		for (; i < n; i++)
		{
			dest[i] = '\0';
		}
	}

	return (dest);
}
