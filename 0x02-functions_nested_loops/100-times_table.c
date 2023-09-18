#include "main.h"
#include <stdio.h>

/**
 * print_times_table -  prints n times table, starting with 0
 * @n: the integer
 */

void print_times_table(int n)
{
	int i;
	int j;
	int product;
	int spaces;

	i = 0;
	j = 0;

	if (n > 15 || n < 0)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			product = i * j;
			spaces= j > 0 ? (product < 10 ? 3 : (product < 100 ? 2 : 1)) : 0;
			printf("%*d", spaces, product);

			if (j < n)
			{
				printf(",");
			}
		}
		printf("\n");
	}
}
