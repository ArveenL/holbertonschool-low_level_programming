#include <stdio.h>

/**
* main - prints Hello, world
* Return: 0
*/

int main(void)
{
	char reverse = 'z';

	while (reverse >= 'a')
	{
		putchar(reverse);
		reverse--;
	}
	putchar('\n');
	return (0);
}
