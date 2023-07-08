#include "main.h"

/**
 * _sqrt_recursion_aux - This funtion return the natural square root.
 * @n : number to calcualte square root
 * @y : square root
 * Return: the value of the natural square root.
 */

int _sqrt_recursion_aux(int n, int y)
{
	if (n > (y * y))
	{
		y++;
	}
	else if (n < (y * y))
	{
		return (-1);
	}
	else if (n == (y * y))
	{
		return (y);
	}
	return (_sqrt_recursion_aux((n), y++));
}

/**
 * _sqrt_recursion - This funtion return the natural square root.
 * @n: number to calcualte square root
 * Return: the value of the natural square root.
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_aux(n, 1));
}
