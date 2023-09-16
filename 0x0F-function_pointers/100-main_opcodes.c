#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * @argc: numbers of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int bytes;
	int i;
	unsigned char *main_ptr;
	char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	main_ptr = (unsigned char *)main;

	for (i = 0; i < bytes; i++)
	{
		printf("%02x ", main_ptr[i]);
	}
	printf("\n");

	return (0);
}
