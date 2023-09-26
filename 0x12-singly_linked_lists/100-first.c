#include <stdio.h>

/**
 * __atribute__ - constructor
 */

void __attribute__((constructor)) init(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
