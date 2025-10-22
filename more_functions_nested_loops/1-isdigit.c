#include <stdio.h>
#include "main.h"

/**
* _isdigit - boum
* @c: the character to check
*
* Return: 1 if lowercase, 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
