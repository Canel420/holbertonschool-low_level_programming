#include "search_algos.h"

/**
 * min - Function to find minimum value between two integers.
 *
 * @a: first integer.
 * @b: second integer.
 *
 * Return: minimum integer.
 */
size_t min(size_t a, size_t b)
{
	return ((a > b) ? b : a);
}

/**
 * print_search - print elements of an array.
 *
 * @array: pointer to the first element of the array.
 * @start: lowest index of array.
 * @end: highest index of array.
 *
 * Description: prints the elements where a binary search is being
 * executed.
 */
void print_search(int *array, size_t start, size_t end)
{
	size_t i = 0;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		if (i < end)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
		}
}

/**
 * binary_search - Searches for a value in a sorted array.
 *
 * @array: pointer to the first element of the array.
 * @size: number of elements in array.
 * @value: value to search for.
 *
 * Description: search for a given value using binary search
 * algorithm.
 * Return: the index where the value is at or -1 if couldn't be found.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, mid = 0;

	if (array == NULL || size <= 0)
		return (-1);

	while (low <= high)
	{
		print_search(array, low, high);

		mid = low + (high - low) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array.
 *
 * @array: pointer to the first element of the array.
 * @size: number of elements in array.
 * @value: value to search for.
 *
 * Return: the index where the value is at or -1 if couldn't be found.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, low = 0;
	int r;

	if (array != NULL && size > 0)
	{
		while (i < size && array[i] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			i *= 2;
		}
		low = i / 2;
		i = min(size - 1, i);
		printf("Value found between indexes [%lu] and [%lu]\n", low, i);
		r = binary_search(array + low, i + 1 - low, value);
		if (r >= 0)
			return (r + low);
	}
	return (-1);
}
