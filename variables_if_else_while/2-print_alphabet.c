#include <stdio.h>

/**
 * main - main block
 * Description: This program print the alphabet in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	char abc = 'a';
		for (abc = 'a'; abc <= 'z'; abc++)
		putchar(abc);
		putchar('\n');
	return (0);
}
