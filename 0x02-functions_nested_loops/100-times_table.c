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
	int temp;
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
			temp = product;
			while (temp >= 10)
			{
				temp /= 10;
				spaces++;
			}
			printf("%*d", spaces, product);
			if (j < n)
			{
				printf(",");
			}
		}
		printf("\n");
	}
}
