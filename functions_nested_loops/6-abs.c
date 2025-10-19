#include <stdio.h>
#include "main.h"

/**
* _abs - computes absolute value of an int
* @i: int to check
*
* Return: i or (i*-1)
*/

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (-i);
	}
}
