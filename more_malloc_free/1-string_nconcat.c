#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - This funtion allocates memory for an array, using malloc
 *
 * @nmemb : is a long of array
 * @size : is bytes of elements
 *
 * Return: Pointer to Array
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{
	char *ar;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ar = malloc(size * nmemb);

	if (ar == NULL)
		return (NULL);

	while (i < size * nmemb)
	{
		ar[i] = 0;
		i++;
	}

	return (ar);

}
