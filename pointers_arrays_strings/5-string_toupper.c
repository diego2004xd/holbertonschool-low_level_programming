#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @letter: patameter pointer
 *
 * Return: uppercase
 */

char *string_toupper(char *letter)
{
	char *pointer = letter;

	while (*pointer != '\0')
	{
		if (*pointer >= 'a' && *pointer <= 'z')
		{
			*pointer = *pointer - 32;
		}
		pointer++;
	}

	return (letter);
}
