#include <stdio.h>
#include <stdlib.h>

/**
 * calculate_coins - Calculate the minimum number of coins needed for change.
 * @cents: Amount in cents
 *
 * Return: Minimum number of coins needed.
 */
int calculate_coins(int cents)
{
	int count;

	count = 0;
	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
		}
		else if (cents >= 10)
		{
			cents -= 10;
		}
		else if (cents >= 5)
		{
			cents -= 5;
		}
		else if (cents >= 2)
		{
			cents -= 2;
		}
		else
		{
			cents -= 1;
		}
		count++;
	}

	return (count);
}

/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array containing the command-line arguments
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int cents, count;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	count = calculate_coins(cents);

	printf("%d\n", count);
	return (0);
}

