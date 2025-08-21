#include "main.h"

/**
     * function_name - more_numbers
     * @parameter_name: int i,j
     *
     * Return: void
     */


void more_numbers(void)
{
	int i;
	int j;

    	for (i = 0; i < 10; i++)
	{
        	for (j = 0; j <= 14; j++)
		{

            		if (j >= 10)
               			_putchar('1');
            		_putchar('0' + (j % 10));
        	}
	        _putchar('\n');
    	}

}

