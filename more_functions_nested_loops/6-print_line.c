/*
 * File: 6-print_line.c
 * Auth: Diego
 */

#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int lines;

	if (n > 0)
	{
		for (lines = 0; lines < n; lines++)
			_putchar('_');
	}

	_putchar('\n');
}
