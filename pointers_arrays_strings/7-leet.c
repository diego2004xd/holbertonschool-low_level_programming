#include "main.h"

/**
 * leet - Write a function that encodes a string into 1337
 * @letter: This is the input string
 *
 * Return: String converted to 1337
 */

char *leet(char *letter)
{
	int index, j;
	char lowercase[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char uppercase[] = {'A', 'E', 'O', 'T', 'L', '\0'};
	char numbers[] = {'4', '3', '0', '7', '1', '\0'};

	for (index = 0; letter[index] != '\0'; ++index)
	{
		for (j = 0; j < 5; j++)
		{
			if (letter[index] == lowercase[j] || letter[index] == uppercase[j])
			{
				letter[index] = numbers[j];
			}
		}
	}
	return (letter);
}
