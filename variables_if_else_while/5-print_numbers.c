#include <stdio.h>

/**
 * main - prints numbers 0 to 9
 * Return: 0
 */

int main(void)
{
	char number = '0';

	while (number <= '9')
    	{
        	putchar(number);
        	number++;
        }
    	putchar('\n');
    	return (0);
}
