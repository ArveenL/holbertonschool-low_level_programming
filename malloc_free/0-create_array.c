#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes it with a specific char
 * @size: Size of the array to create
 * @c: Character to initialize the array with
 * 
 * Return: Pointer to the array, or NULL if it fails or size is 0
 */
char *create_array(unsigned int size, char c)
{
    char *array;
    unsigned int i;

    /* Return NULL if size is 0 */
    if (size == 0)
        return (NULL);

    /* Allocate memory for the array */
    array = malloc(size * sizeof(char));

    /* Return NULL if malloc fails */
    if (array == NULL)
        return (NULL);

    /* Initialize each element with the given character */
    for (i = 0; i < size; i++)
        array[i] = c;

    return (array);
}
