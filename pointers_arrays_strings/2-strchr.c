#include <stddef.h>
/**
 * _strchr - locates a character in a string.
 * @s: chain strings
 * @c: letter compare
 *
 * Return: character c
 */
char *_strchr(char *s, char c)
{
	while (1)
	{
		if (*s == c)
		    return (s);
	        if (*s == 0)
		    return (NULL);
		s++;
       	}
	return (NULL);
}
