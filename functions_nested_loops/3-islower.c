#include <stdio.h>
#include "main.h"

/**
* int _islower - check lowercase character
* @int c - iterate a-z using int c
*
* Description:use prototype to check for lowercase characters
*
* Return: returns 1 c is lowercase, 0 if not
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
