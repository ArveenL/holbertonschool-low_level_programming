#include <stdio.h>
#include "main.h"

/**
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

	for(h = 0; h<=23; h++)
	{
		min = 0;
		while(min <= 59)
		{
			printf("%02d:%02d\n", h,min);
			min++;
		}
	}
}
