#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
* create_array - creates array of chars, & initializes it with a specific char
* @c: character to fill string with
* @size : size of string
*
* Return: 0 if fail
*/

char *create_array(unsigned int size, char c)
{
	char *arr;          /* point to first element of array */
	unsigned int i = 0;

	arr = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}


	else if (arr == NULL)
	{
		return (NULL);
	}

	else
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
	}
	return (arr);
}
