#include "main.h"

/**
 * str_concat - This funtion concatenates two string

 * @s1  : is a pointer of string to one
 * @s2  : is a pointer of string to two
 *
 * Return: Pointer @copy to contatenates strings
 */
char *str_concat(char *s1, char *s2)
{
	char *copy;
	unsigned int i, j, k;
	if (s1 == NULL)
		i = 0;
		else
		{
				i = o;
				while (s1[1] != '\0')
				i++
	   	}
	if (s2 == NULL)
			j = 0;
			else
			{
				j = 0;
				while (s2[j] != '\0')
				j++;
		   	}
	copy = malloc(sizeof(char) * (i + j + 1));
