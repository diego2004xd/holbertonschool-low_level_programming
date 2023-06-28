/*
 * File: 3-puts.c
 * Auth: Diego beltran
 */

#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: Pointer parameter
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
