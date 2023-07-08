#include "main.h"

/**
 * _pow_recursion - This funtion return the value of x raised todo power of y.
 *
 * @x : number base
 * @y : exponent
 * Return: the value of x raised todo power of y
 */

int _pow_recursion(int x, int y)

{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{

		return (1);
	}
	if (y <= 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
