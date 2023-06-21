#include <stdio.h>

/**
 * main - main block
 * Description: This program print the alphabet in lowercase and uppercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	char abc;
		for (abc = 97; abc <= 122; abc++)
		{
			if (abc != 101 && abc != 113)
			putchar(abc);
		}
		putchar('\n');
	return (0);
}
