#include <stdio.h>

/**
 * main - main block
 * Description: This program print the alphabet in lowercase and uppercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	char abc = 'a';
		for (abc = 'a'; abc <= 'z'; abc++)
		putchar(abc);
		for (abc = 'A'; abc <= 'Z'; abc++)
		putchar(abc);
		putchar('\n');
	return (0);
}
