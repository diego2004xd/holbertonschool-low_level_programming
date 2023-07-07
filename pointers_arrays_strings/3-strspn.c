#include "main.h"
/*
 * _strspn function that gets the length of a prefix substring.
 * @s  which consist only of bytes from
 * @f The standard library provides a similar function
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int iter1, iter2;
    unsigned int number1 = 0;
    unsigned int number2 = 0;

	for (iter1 = 0; s[iter1] != '\0'; iter1++)
    {
        for (iter2 = 0; accept[iter2] != '\0'; iter2++)
        {
        	if (s[iter1] == accept[iter2])
            {
                number1++;
                number2 = 0;

                break;
            }
            else
            {
                number2++;
                if (accept[number2] == '\0')
                {
                    return (number1);
                }
            }
        }
    }

    return (number1);
}
