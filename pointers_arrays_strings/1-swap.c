#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps two ints
 * @a: int a
 * @b: int b
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = 0;
	*a = temp;
	*b = *a;
	temp = *b;
}
