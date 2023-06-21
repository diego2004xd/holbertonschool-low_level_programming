#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char c;
	int number = 0;

	while (number <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');
		number++;
	}
}
