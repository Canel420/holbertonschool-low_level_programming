#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Array of integers
 *
 * @width: Width of the array.
 * @height: Height of the array.
 *
 * Description: function that returns a pointer to a 2 dimensional
 * array of integers.
 *
 * Return: Pointer to 2D array.
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	/* Array of pointers of size height */
	arr = (int **)malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);

	/* Allocated memory of size width to every row in height */
	for (i = 0 ; i < height; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * width);
		if (arr[i] == NULL)
			return (NULL);

		/* initialize the allocated memory with 0 */

		for (j = 0; j < width ; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
