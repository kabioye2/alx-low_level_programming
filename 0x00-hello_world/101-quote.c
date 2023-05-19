#include <stdio.h>
#include <string.h>

/**
 * main - using putchar
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int i = 0;

	while (message[i] != '\0')
	{
		putchar(message[i]);
		i++;
	}

	return (1);
}
