#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates of string
 * @str: string to duplicate
 * Return: Pointer to the new string or NULL
 */

char *_strdup(char *str)
{
	char *dup;
	int length;
	int i;

	length = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length] != '\0')
	{
		length++;
	}

	dup = (char *)malloc((length + 1) * sizeof(char));
	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= length; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}
