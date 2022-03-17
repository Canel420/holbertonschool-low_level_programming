#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer.
 *
 * @array: Array to search for integers.
 * @size: Size of the array.
 * @cmp: function to compare values.
 *
 * Description: iterates over and array searching an integer
 * acording to cmp function.
 *
 * Return: the index of the first element for which
 * cmp doesn't return 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0 ; i < size ; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
