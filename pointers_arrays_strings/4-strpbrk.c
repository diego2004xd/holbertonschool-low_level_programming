#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: Init String
 * @accept: find in String
 *
 * Return: byte s
 */
char *_strpbrk(char *s, char *accept)
{
	int index, count;

	for (index = 0; s[index] != '\0'; index++)
	{
		for (count = 0; accept[count] != '\0'; count++)
		{
			if (accept[count] == s[index])
			{
				return (&s[index]);
			}
		}
	}

	return (NULL);
}
