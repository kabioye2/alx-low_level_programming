#include <stdio.h>

/**
 * init - constructor
 */

void __attribute__((constructor)) init(void)
{
	printf("You're beat! and yet, you must allow,\n
			I bore my house upon my back!\n");
}
