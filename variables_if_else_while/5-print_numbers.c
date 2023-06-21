#include <stdio.h>

/**
 * main - main block
 * Description: This program print all single digit starting 0
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = '0';
		for (n = 0; n <= 9; n++)
		putchar(48 + n);
		putchar('\n');
	return (0);
}
