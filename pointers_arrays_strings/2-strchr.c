#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: chain strings
 * @c: letter compare
 *
 * Return: character c
 */
char *_strchr(char *s, char c)
{
	for (; ; s++)
	{
		if (*s == c)
			return (s);
		if (*s == 0)
			return (NULL);
	}

	return (NULL);
}
