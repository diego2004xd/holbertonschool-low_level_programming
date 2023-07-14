#include "main.h"
#include <stdlib.h>

/**
 * free_grid - This funtion free a 2 dimensional grid previously
 * created by your alloc_grid function.
 *
 * @grid: is array to free
 * @height: is row of array
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)

{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
