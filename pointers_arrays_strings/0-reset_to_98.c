#include "main.h"

/**
 * reset_to_98 - Updates the value pointed to by a pointer to 98
 * @n: Pointer to an int  that doesn't change value but address only
 *
 * Return: void
 */
void reset_to_98(int *n)
{
	*n = 98;
}
