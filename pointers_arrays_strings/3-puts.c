/*
 * File: 3-puts.c
 * Auth: Diego beltran
 */

#include "main.h"

/**
<<<<<<< HEAD
 * _pust - print a string, followed by a new line 
 * @str: pointer parameter
=======
 * _puts - prints a string, followed by a new line
 * @str: Pointer parameter
>>>>>>> d9d8063938adc29423a37b77e6c5a49ada6e9712
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
