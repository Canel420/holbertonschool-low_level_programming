#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers.
 *
 * @array: pointer to the first element of the array.
 * @size:  number of elements in array.
 * @value: value to search for.
 *
 * Description: searchs for a given value using jump search
 * algorithm.
 *
 * Return: index where the value is at or -1 if couldn't be found.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start = 0, i = 0;
	size_t end = 0;

	if (!array || size <= 0)
		return (-1);

	while (array[end] < value && end < size)
	{
		start = end;
		end += sqrt(size);
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", start, end);

	for (i = start; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
