#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Function that executes each element in an array
 *
 * @array: Array to be executed
 * @size: Array size
 * @action: Pointer to the function
 * Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != 0 && array != 0)
	{
		for (i = 0; i < size; ++i)
			action(array[i]);
	}

}
