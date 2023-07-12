#include "main.c"

/**
 * function that creates an array of chars, and initializes it with a specific char.
 * @size: lenght of array
 * @c: input character
 *
 * Return: pointerto the array
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int iterator;
	char *s;

	if (size == 0)
			return (NULL);

	s = malloc(sizeof(char) *size);

	if (s == NULL)
			return (NULL);
	for (iterator = 0; iterator < size; iterator++)
			s[iterator] = c;
	return (s);
}
