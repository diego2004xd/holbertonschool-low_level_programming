#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: Pointer parameter
 */
void puts_half(char *str)
{
	int index = 0, lenght = 0, n;

	while (str[index++])
		lenght++;

	if ((lenght % 2) == 0)
		n = lenght / 2;

	else
		n = (lenght + 1) / 2;

	for (index = n; index < lenght; index++)
		_putchar(str[index]);

	_putchar('\n');
}
