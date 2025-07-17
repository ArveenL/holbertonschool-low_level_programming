#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers
 * @width: Width of the grid
 * @height: Height of the grid
 * 
 * Return: Pointer to a 2 dimensional array of integers.
 *         Each element of the grid should be initialized to 0.
 *         NULL on failure or if width or height is 0 or negative.
 */
int **alloc_grid(int width, int height)
{
    int **grid;
    int i, j;

    /* Return NULL if width or height is 0 or negative */
    if (width <= 0 || height <= 0)
        return (NULL);

    /* Allocate memory for array of pointers (rows) */
    grid = malloc(height * sizeof(int *));

    /* Return NULL if malloc fails */
    if (grid == NULL)
        return (NULL);

    /* Allocate memory for each row */
    for (i = 0; i < height; i++)
    {
        grid[i] = malloc(width * sizeof(int));

        /* If malloc fails, free previously allocated memory */
        if (grid[i] == NULL)
        {
            for (j = 0; j < i; j++)
                free(grid[j]);
            free(grid);
            return (NULL);
        }

        /* Initialize all elements to 0 */
        for (j = 0; j < width; j++)
            grid[i][j] = 0;
    }

    return (grid);
}
