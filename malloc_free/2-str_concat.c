#include <stdlib.h>

/**
 * str_concat - This funtion concatenates two string
 *
 * @s1  : is a pointer of string to one
 * @s2  : is a pointer of string to two
 *
 * Return: Pointer @copy to contatenates strings
 */

char *str_concat(char *s1, char *s2)

{
	char *copy;
	unsigned int i, j, k;

	if (s1 == NULL && s2 == NULL)
		{
		copy = malloc(sizeof(char) * 1);
		copy[0] = '\0';
		return (copy);
		}

		if (s1 == NULL)
			i = 0;
			else
			{
				i = 0;
				while (s1[i] != '\0')
				i++;
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

		if (copy == NULL)
			return (NULL);
		for (k = 0; k < i; k++)
			copy[k] = s1[k];
		if (j == 0)
			copy[k] = s1[k];
		else
			for (k = i; k <= (i + j); k++)
			copy[k] = s2[k - i];

		return (copy);
}
