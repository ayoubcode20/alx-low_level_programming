#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given
 * as a parameter on each element of an array
 *
 * @array: The array to print
 * @size: The size of the array
 * @action: pointer to a function
 *
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action && size && array)
	{
		for (i = 0; i < size ; i++)
			action(array[i]);
	}
}
