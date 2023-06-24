/*
 *  * File: 7-print_diagonal.c
 *   * Auth: David Vasquez
 *    */

#include "main.h"

/**
 *  * print_diagonal - Draws a diagonal line using the \ character.
 *   * @n: parameter
 *    */
void print_diagonal(int n)
{
		int diagonal, space;

			if (n > 0)
					{
								for (diagonal = 0; diagonal < n; diagonal++)
											{
															for (space = 0; space < diagonal; space++)
																				_putchar(' ');
																		_putchar('\\');

																					if (diagonal == n - 1)
																										continue;

																								_putchar('\n');
																										}
									}

				_putchar('\n');
}
