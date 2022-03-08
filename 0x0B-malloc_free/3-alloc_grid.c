#include "main.h"
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int **arr, r, c;

	if (width <= 0 || height <=0)
		return (NULL);

	/* Dynamically create an array of pointers of size height */
	arr = (int **) malloc(width * sizeof(int *));

	if (arr == NULL)
		return (NULL);

	/* Dynamically allocate memory of size width */
	for (r = 0 ; r < width ; r++)
	{
		arr[r] = malloc(height * sizeof(int));

		if (arr[r] == NULL)
			return (NULL);
	}
	/* Initialize memory with zeros */
	for (r = 0 ; r < width ; r++)
	{
		for (c = 0 ; c < height ; c++)
		{
			arr[r][c] = 0;
		}
	}

	for (r = 0; r < width ; r++)
	{
		free(arr[r]);
	}
	free (arr);

	return (arr);
}
