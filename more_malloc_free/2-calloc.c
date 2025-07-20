#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: size of each element in bytes
 *
 * Return: pointer to allocated memory, set to zero
 * NULL if nmemb or size is 0, or if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    char *ptr;
    unsigned int total_size, i;

    /* Check if nmemb or size is 0 */
    if (nmemb == 0 || size == 0)
        return (NULL);

    /* Calculate total size needed */
    total_size = nmemb * size;

    /* Allocate memory */
    ptr = malloc(total_size);
    if (ptr == NULL)
        return (NULL);

    /* Set memory to zero */
    for (i = 0; i < total_size; i++)
        ptr[i] = 0;

    return (ptr);
}
