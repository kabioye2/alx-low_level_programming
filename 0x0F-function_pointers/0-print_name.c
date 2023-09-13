#include "main.h"

/**
 * print_name - prints a name using printing function
 * @name: the name to print
 * @f: a pointer to a function
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
