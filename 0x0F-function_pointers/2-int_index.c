#include "function_pointers.h"

/**
 * int_index - searches for integer
 * @array: the array to be searched
 * @size: size of array
 * @cmp: pointer to a function to compare values
 * Return: the index of the first element for which the @cmp
 * function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
