#include "main.h"
#include <stdio.h>

/**
 * print times_table -  prints n times table, starting with 0
 * @n: the integer
 */

void print_times_table(int n)
{
	int i;
	int j;
	int product;

	i = 0;
	j = 0;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			product = i * j;

			if (j > 0 && product < 10)
			{
				printf(" ");
			}
			printf("%d", product);

			if (j < (n - 1))
			{
				printf(", ");;
			}
		}
		printf("\n");
	}
}
