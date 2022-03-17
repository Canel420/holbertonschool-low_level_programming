#include "function_pointers.h"

/**
 * array_iterator - Function that executes a function given
 * as a parameter on each element of an array.
 *
 * @array: Array to be iterated.
 * @size: Size of the array.
 * @action: Function to perform on array.
 *
 * Description: Apply the function given over each element
 * of the array.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0 ; i < size ; i++)
		action(array[i]);
}
