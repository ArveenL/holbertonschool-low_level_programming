#include <stdlib.h>

/**
 * free_grid - Frees a 2D array of integers
 * @grid: Pointer to the 2D array to free
 * @height: The height (number of rows) of the grid
 *
 * Description: Frees all rows first, then frees the grid itself.
 * Does nothing if grid is NULL.
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
