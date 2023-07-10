#include <stdio.h>

/**
<<<<<<< HEAD
 * main - prints the number of arguments passed into it
=======
 * main -  the number of arguments passed into it.
>>>>>>> b1de2d988ed26219a7bf5b4379b796d133de72b2
 * @argc: argument count
 * @argv: argumnet vector
 *
<<<<<<< HEAD
 * return: Always o.
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
=======
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	 printf("%d\n", argc - 1);
	 (void)argv;
	 return (0);
>>>>>>> b1de2d988ed26219a7bf5b4379b796d133de72b2
}
