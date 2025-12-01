#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - I have an array, I have the size of the array,
 * and I need to call the function action to each element in the array
 * @array: Pointer to the array of integers
 * @size: Number of elements in the array
 * @action: Pointer to function that takes an int and returns void
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
