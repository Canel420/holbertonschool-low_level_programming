#include "main.h"
#include <stdlib.h>

/**
 * array_range - Function that creates an array of integers.
 *
 * @min: Minimum value to initialize array.
 * @max: Maximum value to reach in array.
 *
 * Description: Creates an array of integers that start at min
 * and end at max.
 *
 * Return: Pointer to array of integers
 */

int *array_range(int min, int max)
{
	int i, size;
	int *arr;

	if (min > max)
		return (NULL);

	/* Take in account if min != 0 */
	size = max - min + 1;

	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0 ; i <= size ; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
