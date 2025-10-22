#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */

void times_table(void)
{
	int i; /*row*/
	int j; /*column*/
	int x; /*multiply*/

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 9; i++)
		{
			x = (j * i);

			if (x != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

		}

		if (x < 10 && j != 0)
		{
			_putchar(' ');

		}

		if (x >= 10)
		{
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
		}
		else
		{
			_putchar(x + '0');
		}

	}
}
