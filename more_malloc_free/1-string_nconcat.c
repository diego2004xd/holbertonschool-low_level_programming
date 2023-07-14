#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - This funtion concatenates two string,
 * which contains s1, followed by the first n bytes of s2, and null terminated
 *
 * @s1  : is a pointer of string to one
 * @s2  : is a pointer of string to two
 * @n : is a n bytes of s2
 *
 * Return: Pointer @copy to contatenates strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	char *copy;
	unsigned int i = 0, j = 0, k;

	if (s1 == NULL && s2 == NULL)
	{
		copy = malloc(sizeof(char) * 1);
		copy[0] = '\0';
		return (copy);
	}
	if (s1 != NULL)
		for (i = 0; s1[i] != '\0'; i++)
			;
	if (s2 != NULL)
		for (j = 0; s2[j] != '\0'; j++)
			;
	if (n > j)
		copy = malloc(sizeof(char) * (i + j + 1));
	else
		copy = malloc(sizeof(char) * (i + n + 1));

	if (copy == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		copy[k] = s1[k];
	if (j == 0)
		copy[k] = s1[k];
	else
		if (n > j)
		{
			for (k = i; k <= (i + j); k++)
				copy[k] = s2[k - i];
		}
		else
		{
			for (k = i; k < (i + n); k++)
				copy[k] = s2[k - i];
			copy[k] = s2[j];
		}
	return (copy);
}
