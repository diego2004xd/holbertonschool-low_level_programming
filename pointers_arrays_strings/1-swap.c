/*
 * File: 1-swap.c
 * Auth: David Vasquez
 */

#include "main.h"

/**
 * swap_int - swaps the values of two integer
 * @a: first pointer
 * @b: second pointer
 */
void swap_int(int *a, int *b)
{
	int firstValue = *a;

	*a = *b;
	*b = firstValue;
}
