#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimensional grid previously created by alloc_grid
 * @grid: The address of the two dimensional grid
 * @height: Height of the grid
 * 
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
    int i;

    /* Check if grid is not NULL */
    if (grid == NULL)
        return;

    /* Free each row */
    for (i = 0; i < height; i++)
    {
        if (grid[i] != NULL)
            free(grid[i]);
    }

    /* Free the array of pointers */
    free(grid);
}
