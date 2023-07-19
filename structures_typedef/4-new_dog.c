#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * *_strdup - This funtion copya string to a newly space of memory.
 *
 * @str  : is a pointer of string to copy
 *
 * Return: Pointer @copy to copy of a string
 */

char *_strdup(char *str)

{
	char *copy;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	copy = malloc(sizeof(char) * (i + 1));

	if (copy == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		copy[j] = str[j];

	return (copy);
}

/**
 * new_dog - Function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)

{
	dog_t *new_dog;

	new_dog = malloc(sizeof(struct dog));

	if (new_dog == 0 || name == 0 || owner == 0)
		return (0);

	new_dog->name = _strdup(name);
	if (new_dog->name == 0)
	{
		free(new_dog);
		return (0);
	}
	new_dog->age = age;
	new_dog->owner = _strdup(owner);
	if (new_dog->owner == 0)
	{
		free(new_dog);
		free(new_dog->name);
		return (0);
	}
	return (new_dog);
}
