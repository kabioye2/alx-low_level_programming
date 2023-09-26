#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_digit - Check if a string represents a positive integer.
 * @str: The string to check.
 * Return: 1 if it's a positive integer, 0 otherwise.
 */

int is_digit(char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}

/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array containing the command-line arguments
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		if (!is_digit(argv[i]) || atoi(argv[i]) < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
