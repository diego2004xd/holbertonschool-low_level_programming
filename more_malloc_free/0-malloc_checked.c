#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - This funtion allocates memory using malloc.
 *
 * @b  : is a size of memory
 *
 * Return: Pointer @pt to the allocated memory
 */

void *malloc_checked(unsigned int b)

{
	char *pt;

	pt = malloc(b);

	if (pt == NULL)
		exit(98);

	return (pt);
}
