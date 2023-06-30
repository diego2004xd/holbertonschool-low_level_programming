#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer
 * @b: constant memory
 * @n: unsigned memory
 *
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		s[count] = b;
	}

	return (s);
}
