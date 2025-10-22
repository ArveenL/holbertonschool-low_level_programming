#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */

void times_table(void)
{
	int i, j, x;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			x = i * j;

			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (x < 10)
					_putchar(' ');
			}

			if (x >= 10)
			{
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}
			else
				_putchar(x + '0');
		}
		_putchar('\n');
	}
}
