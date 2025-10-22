#include <stdio.h>
#include "main.h"

i/**
* jack_bauer - tuc, tuc ..tuc,tuc
* @h: hour
* @min: min
*
* Return: void
*/

void jack_bauer(void)
{
	int h;
	int min;

	for (h = 0; h <= 23; h++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
