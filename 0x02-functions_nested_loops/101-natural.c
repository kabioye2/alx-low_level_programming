#include "main.h"
#include <stdio.h>

/**
 main - find sum for multiples below 1024
 */

int main(void)
{
	int i;
	int sum;

	sum = 2;
	for (i = 6; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
