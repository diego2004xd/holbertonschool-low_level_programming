#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of arguments passed into it
 * main -  the number of arguments passed into it.
 * @argc: argument count
 * @argv: argumnet vector
 *
 * return: Always o.
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
