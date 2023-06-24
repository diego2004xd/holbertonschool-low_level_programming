/*
 * File: 5-more_numbers.c
 * Auth: Diego beltran
 */

#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int num, count;

	for (count = 0; count <= 9; count++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
