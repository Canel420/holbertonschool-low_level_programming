#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Function that frees a 2 dimensional grid.
 *
 * @grid: 2D grid to be freed
 * @height: Height of the grid.
 *
 * Description: Frees a 2 dimensional grid previously created.
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0 ; i < height ; i++)
		free(grid[i]);
	free(grid);
}
