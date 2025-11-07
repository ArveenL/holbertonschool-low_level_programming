#include <stdio.h>
#include "main.h"

/**
 * reverse_array - print revese of arrays
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;
	int j = (n - 1);

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
