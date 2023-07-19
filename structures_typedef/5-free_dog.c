#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - This funtion free memory of structure dogs
 *
 * @d  : is a pointer to structure dog
 */


void free_dog(dog_t *d)

{
	if (d != 0)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
