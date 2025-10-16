#include <stdio.h>

/**
* main - prints single digit f/ by , and space
* Return: 0
*/

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + '0');
		putchar(',');
		putchar(' ');
		n++;
	}
	return (0);
}
