#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic.
 * @c: The character to be checked
 *
 * Return: lowercase or uppercase
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
