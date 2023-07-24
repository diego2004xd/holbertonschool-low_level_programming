#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdbool.h>

/**
 * print_all - Function that prints anything
 * @format: print value
 */

void print_all(const char * const format, ...)
{
	va_list v1;
	char *string;
	int i;

	i = 0;
	va_start(v1, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%i", va_arg(v1, int));
				break;
			case 'f':
				printf("%f", va_arg(v1, double));
				break;
			case 'c':
				printf("%c", (char) va_arg(v1, int));
				break;
			case 's':
				string = va_arg(v1, char *);
				if (string == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", string);
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
		format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(v1);
}
