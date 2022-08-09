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
	size_t a = 0, b = 0, step = sqrt(size);

	if (!array || size <= 0)
		return (-1);

	while (b < size && array[b] < value)
	{
		a = b;
		b += step;
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", a, b);

	while (a < b && a < size)
	{
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);
		a++;
	}

	return (-1);
}
