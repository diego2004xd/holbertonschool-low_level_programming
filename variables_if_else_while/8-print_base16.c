#include <stdio.h>

/**
 * main - main block
 * Description: This program print all the numbers of base 16 in lowercase
 * Return: Always 0 (Success RV)
 */

int main(void)
{
	int n = '0';
		for (n = 0; n <= 9; n++)
		putchar(48 + n);
		for (n = 97; n <= 102; n++)
			putchar(n);
		putchar('\n');
	return (0);
}
