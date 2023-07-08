#include "main.h"

/**
 * factorial - This funtion length of a string.
 *
 * @n : number to calculate the factorial
 * Return: facrtorial of @n
 */

int factorial(int n)

{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
