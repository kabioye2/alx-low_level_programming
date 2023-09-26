#include <stdio.h>

/**
 * __atribute__ - constructor
 */

void __attribute__((constructor)) init(void)
{
	printf("A tortoise, having pretty good sense of a hare's nature, challenges one to a race.\n");
}
