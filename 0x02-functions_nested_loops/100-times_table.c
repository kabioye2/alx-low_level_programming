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

			if (j > 0)
			{
				if (product < 10)
				{
					printf("   ");
				}
				else if (product < 100)
				{
					printf("  ");
				}
				else if (product < 1000)
				{
					printf(" ");
				}
			}
			printf("%d", product);

			if (j < n)
			{
				printf(",");
			}
		}
		printf("\n");
	}
}
