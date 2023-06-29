#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: font
 * @n: max bytes
 *
 * Return: Final string concatenated
 */
char *_strncat(char *dest, char *src, int n)
{
	char *stringFinal = dest;

	while (*dest != '\0')
		dest++;

	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (stringFinal);
}
