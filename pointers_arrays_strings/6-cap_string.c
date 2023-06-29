#include "main.h"

/**
 * cap_string - Write a function that capitalizes all words of a string.
 * @letter: This is the input string
 *
 * Return: String capitalized
 */
char *cap_string(char *letter)
{
	int index, count;
	int conversion = 1;

	char chars[] = {' ', ',', ';', '.', '!',
			 '?', '"', '(', ')', '{', '}',  '\t', '\n', '\0'};

	for (index = 0; letter[index] != '\0'; index++)
	{
		if (conversion && letter[index] >= 'a' && letter[index] <= 'z')
		{
			letter[index] = letter[index] - ('a' - 'A');
		}

		conversion = 0;

		for (count = 0; chars[count] != '\0'; count++)
		{
			if (chars[count] == letter[index])
			{
				conversion = 1;
				break;
			}
		}
	}
	return (letter);
}
