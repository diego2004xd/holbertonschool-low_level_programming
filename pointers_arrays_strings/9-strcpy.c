#include "main.h"

/**
 * _strcpy - copy content of one variable
 * @dest: This is destiny
 * @src: This is the copia
 *
 * Return: This return copy
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
