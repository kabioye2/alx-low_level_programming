#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from
 */

int main(void)
{
	char* filename;
	int i;
	
	filename = __FILE__;
	i = 0;
	while (fileName[i] != '\0')
	{
		_putchar(fileName[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
