#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Find first array element where cmp doesn't return 0
 * @array: Array of integers
 * @size: Number of elements
 * @cmp: Function that tests each element
 *
 * Return: Index of first element where cmp returns non-zero, or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		return (i);
	}
	return (-1);
}
