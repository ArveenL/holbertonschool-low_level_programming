#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* create_array - create array of chars
* @c: value of each char
* @size: size of array
*
* Return: pointer to array or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(size * sizeof(char));

	if (malloc(size) == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
	free(arr);
}
