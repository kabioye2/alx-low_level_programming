#include <stdio.h>

/**
 * main - Prints the alphabet in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
