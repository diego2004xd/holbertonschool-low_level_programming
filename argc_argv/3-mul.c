#include <stdio.h>
#include <stdlib.h>

/**
 * main -  multiplies two numbers.
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int index, multiplicando;

	multiplicando = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	for (index = 1; index < argc; index++)
	{
		/* Pasamos el valor de argv[index] a entero con atoi */
		multiplicando = multiplicando * atoi(argv[index]);
	}

	printf("%d\n", multiplicando);
	return (0);
}
