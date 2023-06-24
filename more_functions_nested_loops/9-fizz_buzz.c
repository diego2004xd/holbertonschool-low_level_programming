/*
 * File: 9-fizz_buzz.c
 * Auth: Diego beltran
 */

#include <stdio.h>

/**
 * main - Prints the numbers from 1-100, but
 *        for multiples of three, Fizz for multiples of five,
 *        for multiples of five Buzz
 *        for multiples of both three and five, FizzBuzz.
 *
 * Return: Always 0.
 */
int main(void)
{
	int initNum;

	for (initNum = 1; initNum <= 100; initNum++)
	{
		if ((initNum % 3) == 0 && (initNum % 5) == 0)
			printf("FizzBuzz");

		else if ((initNum % 3) == 0)
			printf("Fizz");

		else if ((initNum % 5) == 0)
			printf("Buzz");

		else
			printf("%d", initNum);

		if (initNum == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}
