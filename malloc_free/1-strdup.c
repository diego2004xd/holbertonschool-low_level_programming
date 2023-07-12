#include "main.h"

/**
 * function that returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: is a pointer of string to copy
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
			return (NULL)

	for (j = 0; j <= i; j++)
			copy[j] = str[j];
	return (copy)
}
