#include <stdio.h>
#include "main.h"

/**
* puts_half - lamoitier mine bouille
* @n: find half
*
* Return: void
*/

void puts_half(char *str)
{
	int len = 0;  /*index*/
	int n;        /*stores position where second half starts*/

	while (str[len] != '\0')
	{
		len++;
	}

	if (str[len] % 2 == 0)
	{
		(n = len / 2);
	}
	else
	{
		(n = (len / 2) + 2);
	}

	while (str[n] != 0)
	{
		_putchar(str[n]);
		n++;
	}

	_putchar('\n');
}
