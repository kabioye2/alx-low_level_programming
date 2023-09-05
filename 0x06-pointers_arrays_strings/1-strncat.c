#include "main.h"

/**
 * _strncat - concatenates two strings using number
 * of bytes of second string
 * @dest: first string
 * @src: second string
 * @n: bytes of second string
 * Return: a pointer to the resulting string @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}

	for (i = 0; src[i] != '\0' && i <= n; i++)
	{
		dest[len + i] = src[i];
	}

	dest[len + i] = '\0';

	return (dest);
}
