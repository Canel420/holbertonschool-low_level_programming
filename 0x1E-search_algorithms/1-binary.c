#include "search_algos.h"

/**
 * print_search - print elements of an array.
 *
 * @array: pointer to the first element of the array.
 * @low: lowest index of array.
 * @high: highest index of array.
 *
 * Description: prints the elements where a binary search is being
 * executed.
 */

void print_search(int *array, size_t low, size_t high)
{
	size_t i = 0;

	printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i < high)
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
