#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc: argument count
 * @argv: argument vector
 *
 * return Always 0.
 */
int main(int argc, char *argv[])
{
	/*
	 * al resertor 1, se obtiene el numero de argumentos de lineas de comandos
	 * pasados al programa excluyendo el nombre del programa en si.
	 */
	 printf("%d\n", argc - 1);
	 (void)argv;
	 return (0);
}
