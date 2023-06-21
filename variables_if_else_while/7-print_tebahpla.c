#include <stdio.h>

/**
 * main - main block
 * Description: This program print the lowercase alphabet in reverse
 * Return: Always 0 (Success)
 */

int main(void)
{
	char abc = 'z';
		for (abc = 'z'; abc >= 'a'; abc--)
		putchar(abc);
		putchar('\n');
	return (0);
}
