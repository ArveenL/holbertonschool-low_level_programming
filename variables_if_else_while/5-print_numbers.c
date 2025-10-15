#include <stdio.h>

/**
* main - prints 0-9
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
