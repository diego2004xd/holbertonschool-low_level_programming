#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first chain text
 * @s2: second chain text
 *
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
