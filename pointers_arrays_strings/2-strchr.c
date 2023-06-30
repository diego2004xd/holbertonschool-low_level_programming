#include "main.h"
/**
 * function that locates a character in a string.
 * _strchr: function that locates a character in a string.
 * @c: chain character
 * @s: copy character
 *return: null
 */
char *_strchr(char *s, char c)
{
     int i;
     
     for (i = 0; i < c; i++);
     {
	     if (*s == c)
		     return (s);
	     if (*s == 0)
		     return (null);
     }

     return (null);
}
