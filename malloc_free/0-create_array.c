<<<<<<< HEAD
#inlude "main.h"
=======
#include <stdio.h>
#include <stdlib.h>
>>>>>>> 12f3664ccc92c9fcf5648fdad1d6afccbe70071b

/**
 * function that creates an array of chars, and initializes it with a specific char.
 * @size: lenght of array
 * @c: input character
 *
 * Return: pointerto the array
 */
<<<<<<< HEAD
char *create_array(unsigned int size, char c);
=======
void simple_print_buffer(char *buffer, unsigned int size)
>>>>>>> 12f3664ccc92c9fcf5648fdad1d6afccbe70071b
{
	unsigned int iterator;
	char *s;

	if (size == 0)
			return (NULL);

	s = malloc(sizeof(char) *size);

	if (s == NULL)
			return (NULL);
	for (iterador = 0; iterador < size; iterador++)
			s[iterador] = c;
	return (s);
}
