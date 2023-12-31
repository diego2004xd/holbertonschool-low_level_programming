#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - This funtion searches for an integer
 * @array : aaray to search
 * @size : size of the array
 * @cmp: pointer to the function
 *
 * Return: index of the first element for which the cmp function
 * does not return 0, if no element matches return -1,
 * if size <= 0 return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))

{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
