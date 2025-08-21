#include "main.h"

/**
     * void print_square(int size) - prints square
     * @size - function parameter/user input  
     * @i - width
     * @j - lenght
     * Return: returns 0 if size<=0
     */

void print_square(int size)
{
	int i,j;

	if(size<=0)
	{
		_putchar('\n');
		return;
	}
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			_putchar('#');
		}
			_putchar('\n');
	}
}
