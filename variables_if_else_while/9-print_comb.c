#include <stdio.h>

/**
 * main - main block
 * Description: print all possible combinations of single-digit numbers
 * Return: Always 0 (Success RV)
 */

int main(void)
{
int n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
		putchar('\n');
	return (0);
}
