#include "main.h"
#include <stdlib.h>

/**
 * array_range - This funtion creates an array of integers.
 *
 * @min: is integer minimum
 * @max: is integer maximum
 *
 * Return: Pointer @ar to array of integer
 */

int *array_range(int min, int max)

{
	int *ar;
	int i;


		if (min > max)
			return (NULL);
		/** Asignar memoria para el puntero doble (filas)*/
		ar = malloc(sizeof(int) * (max - min + 1));

		if (ar == NULL)
			return (NULL);

		/** Acceder y modificar los elementos de la matriz*/
			for (i = 0; i <= (max - min); i++)
			{
				ar[i] = min + i;
			}

		return (ar);
}
