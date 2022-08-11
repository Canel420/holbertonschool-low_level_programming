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
 * recursive_binary - search a given value in a sorted array.
 *
 * @array: pointer to the first element of the array.
 * @start: lowest index in array.
 * @end: highest index in array.
 * @value: value to search for.
 *
 * Return:  the index where the value is at or -1 if couldn't be found.
 */

int recursive_binary(int *array, size_t start, size_t end, int value)
{
	size_t mid = 0;

	if (start <= end)
	{
		mid = (start + (end - start) / 2);
		if (array[mid] == value)
		{
			print_search(array, start, end - 1);
			return (mid);
		}
		if (array[mid] > value)
			return (recursive_binary(array, start, mid - 1, value));

		print_search(array, start, end - 1);
		return (recursive_binary(array, mid + 1, end, value));
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
	size_t start = 0, end = size - 1, i = 1;

	if (end - start <= 0 || !array)
		return (-1);

	while (i < (end - start))
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] < value)
			i *= 2;
		else
			break;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", i / 2, min(i, end));
	return (recursive_binary(array, i / 2, i, value));
}
