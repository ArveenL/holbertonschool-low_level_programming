#include "main.h"

/**
*print_line - draws line using _
*@n : user input to determine how many _ to print
*/

void print_line(int n)
{ 
	int i;

	if(n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for(i = 0; i < n; i++)
		_putchar('_');
	}
		_putchar('\n');
}

