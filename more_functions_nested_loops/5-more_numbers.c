#include <stdio.h>
#include "main.h"

/**
 * more_numbers - bla bla
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 11; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j + '0');
			_putchar('\n');
		}
	_putchar (i + '0');
	}
}
