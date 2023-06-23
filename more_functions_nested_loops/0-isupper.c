#include "main.h"
/**
 * _isupper - checks for uppercase character.
 * @c: parameter for function
 *
 * Return: 1 if letter is uppercase 0 if otherwise.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
