#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - This funtion executes a function given as a parameter
 * @array : pointer to array
 * @size : size of the array
 * @action: pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
