#include "main.h"

/**
 * is_prime_number_helper - This funtion check if is prime number.
 * @n : number to check
 * @divisor : number divisor
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */

int is_prime_number_helper(int n, int divisor)
{
	if (n <= 1)
	{
		return (0);
	}
	if (divisor * divisor > n)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (is_prime_number_helper(n, divisor + 1));
}

/**
 * is_prime_number - This funtion check if is prime number.
 * @n : number to check
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */


int is_prime_number(int n)
{
	return (is_prime_number_helper(n, 2));
}
