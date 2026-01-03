#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers from min to max
 * @min: Minimum value (included)
 * @max: Maximum value (included)
 *
 * Return: Pointer to newly created array, or NULL on failure
 */
int *array_range(int min, int max)
{
    int *array;
    int size;
    int i;

    /* Check if min is greater than max */
    if (min > max)
        return (NULL);

    /* Calculate the size of the array */
    size = max - min + 1;

    /* Allocate memory for the array */
    array = malloc(sizeof(int) * size);

    /* Check if malloc succeeded */
    if (array == NULL)
        return (NULL);

    /* Fill the array with values from min to max */
    for (i = 0; i < size; i++)
        array[i] = min + i;

    return (array);
}
