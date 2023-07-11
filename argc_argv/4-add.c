#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - adds positive numbers.
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int sum = 0, index;

	if (argc > 1)
	{
		for (index = 1; index < argc; index++)
		{
			int b;
			char *str;

			str = argv[index];
			for (b = 0; str[b] != '\0'; b++)
			{
				if (str[b] < 48 || str[b] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	}
	for (index = 1; index < argc; index++)
	{
		sum += atoi(argv[index]);
	}

	printf("%d\n", sum);
	return (0);
}
