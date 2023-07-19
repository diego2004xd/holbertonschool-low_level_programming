#include <stdlib.h>
#include "dog.h"
#include "main.h"
/**
 * init_dog - This funtion initialize a structure dog
 * @d: Variable to initialize
 * @name: name of the dog´s
 * @age:age of of the dod´s
 * @owner: owner of the dog´s
 *
 * Return: a pointer
 */

void init_dog(struct dog *d, char *name, float age, char *owner)

{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
