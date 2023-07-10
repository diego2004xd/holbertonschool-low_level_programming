#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	/* 
           Al restar 1, se obtiene el número de argumentos de línea de comandos
           pasados al programa excluyendo el nombre del programa en sí.
	*/
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
