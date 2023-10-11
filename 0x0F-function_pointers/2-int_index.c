#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 *
 * @array: The array to be searched
 * @size: The number of elments in the array
 * @cmp:  pointer to the function to be used to compare values
 *
 * Return:  index of the first element for which
 * the cmp function does not return 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (size <= 0)
		return (-1);
	if (cmp && array)
	{
		for (i = 0; i < size; i++)
		{
			j = cmp(array[i]);
			if (j > 0)
				return (i);
		}
	}

	return (-1);
}
