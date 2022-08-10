#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers.
 *
 * @array: pointer to the first element of the array.
 * @size: number of elements in array.
 * @value: value to search for.
 *
 * Description: calls an interpolation search function and search
 * for value.
 *
 * Return: the index where the value is at or -1 if couldn't be found.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos = 0;

	if (array != NULL && size > 0)
	{
		while (array[low] != array[high])
		{
			pos = low + (((double)(high - low) / (array[high] - array[low]))
						* (value - array[low]));
			if (pos < low || pos > high)
			{
				printf("Value checked array[%lu] is out of range\n", pos);
				break;
			}
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			if (array[pos] < value)
				low = pos + 1;
			else if (array[pos] > value)
				high = pos - 1;
			else
				return (pos);
		}
	}
	return (-1);
}
