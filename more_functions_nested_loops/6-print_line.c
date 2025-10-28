#include <stdio.h>
#include "main.h"

/**
 * print_line - st8_line
 * @n: parameter
 *
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar('_');
		_putchar('\n');
	}
}
