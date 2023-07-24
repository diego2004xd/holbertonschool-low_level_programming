#include "variadic_functions.h"


/**
 * sum_them_all - This function that returns the sum of all its parameters
 *
 * @n : arguments of array
 * Return: the sum or 0 if n = 0
 */


int sum_them_all(const unsigned int n, ...)

{
	va_list ap;
	unsigned int i, sum;

	va_start(ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, unsigned int);
	va_end(ap);
	return (sum);

	if (n == 0)
		return (0);
}
