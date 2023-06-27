#include "main.h"

/**
 * _strlen - This funtion return the lengh of a string.
 *
 * @s : is a string
 * Return: the lenght of a string
 */

int _strlen(char *s)

{

	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

return (i);
}
