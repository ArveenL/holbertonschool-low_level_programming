#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array of elements.
 * @nmemb: The number of elements in the array.
 * @size: The size of each element in bytes.
 *
 * Return: A pointer to the allocated memory if successful;
 *         NULL if nmemb or size is 0, or if memory allocation fails.
 *
 * Description: The _calloc function allocates memory for an array of 
 * elements, initializing all bytes to zero. If nmemb or size is 0,
 * the function returns NULL. If the memory allocation fails, it also 
 * returns NULL.
 *
 * Note: This function mimics the behavior of the standard C 
 *       library function calloc, which allocates memory for an 
 *       array of specified size, and initializes all bytes to 
 *       zero.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	void *ptr;
	char *byte_ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	byte_ptr = (char *)ptr;

	for (i = 0; i < (nmemb * size); i++)
	{
		byte_ptr[i] = 0;
	}

	return (ptr);
}
