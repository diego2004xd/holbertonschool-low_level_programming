#include "main.h"
#include <stdio.h>

/**
 * print_array -  prints n elements of an array of integers
 * @a: pointer
 * @n: parameter
 *
 * Return: n is the number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		printf("%d", a[count]);
		if (count == n - 1)
			continue;

		printf(", ");
	}
	putchar('\n');
}
