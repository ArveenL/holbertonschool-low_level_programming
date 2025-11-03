#include <stdio.h>
#include "main.h"

/**
* puts_half - lamoitier mine bouille
* @str: string
*
* Return: void
*/

void puts_half(char *str)
{
	int n = 0;
	
	while (str[n] != '\0')
	{	
		if (n % 2 != 0)
		{
			_putchar(str[n]);
		
		}
		n++;
	}
	_putchar('\n');
}
