#include "main.h"
#include <stdio.h>

/**
 * multiples - find sum for multiples below 1024
 */

void multiples(void)
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
}
