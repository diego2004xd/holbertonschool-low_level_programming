#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - This funtion returns a pointer to a 2 dimensional
 * array of integers
 *
 * @height: is row of array
 * @width: is column of array
 *
 * Return: Pointer @ar to array 2 dimensional
 */

int **alloc_grid(int width, int height)

{
	int **ar;
	int i, j;


		if (width <= 0 || height <= 0)
			return (NULL);
		/** Asignar memoria para el puntero doble (filas)*/
		ar = (int **)malloc(height * sizeof(int *));

		if (ar == NULL)
			return (NULL);

		/** Asignar memoria para cada fila individual*/
		for (i = 0; i < height; i++)
		{
			ar[i] = (int *)malloc(width * sizeof(int));
			if (ar[i] == NULL)
			{
				free(ar);
				for (j = 0; j <= i; j++)
					free(ar[j]);
				return (NULL);
			}
		}

		/** Acceder y modificar los elementos de la matriz*/
			for (i = 0; i < height; i++)
			{
				for (j = 0; j < width; j++)
				{
					ar[i][j] = 0;
				}
			}

		return (ar);
}
