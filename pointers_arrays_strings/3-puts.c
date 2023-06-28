#include "main.h"

/**
 * _pust - print a string, followed by a new line 
 * @str: pointer parameter
 *
 * Return: Always 0.
 */
void _puts(char *str)

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
