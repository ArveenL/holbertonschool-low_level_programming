#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints 10 times
 *
 * Return: void
 */

void more_numbers(void)
{
	int j = 0;
	int i;
	for (i = 0; i <= 10; i++)
	{
		j++;
		
		if (j <= 14 )
		{
			_putchar(j);
		}
		 
		else
		{
			_putchar('\n');
		}
	}
}
