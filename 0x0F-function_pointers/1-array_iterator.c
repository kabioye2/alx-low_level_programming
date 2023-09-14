#include "function_pointers.h"

/**
 * array_iterator - iterate through array
 * @array: the array to iterate through
 * @size: size of array
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
