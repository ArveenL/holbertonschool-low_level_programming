#include <stdio.h>
#include "main.h"

/**
* print_last_digit - checks last digit
* @n:check last digit of n
*
* Return: value of last digit
*/

int print_last_digit(int n)
{
	int i = (n % 10);

	if (i < 0)
	{
		(i = -i);
		_putchar('0' + i);
	}
	else
	{
		_putchar('0' + i);
	}
	return (i);
}
