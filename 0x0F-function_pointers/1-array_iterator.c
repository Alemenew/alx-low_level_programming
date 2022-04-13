#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * @array: array inpute
 * @size: the size of the array
 * @action: pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action && array)
		while (size--)
			action(*(array += 1));
}