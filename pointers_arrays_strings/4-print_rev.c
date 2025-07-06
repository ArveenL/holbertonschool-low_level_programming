#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	/* Find string length */
	while (s[len] != '\0')
	{
		len++;
	}

	/* Print string in reverse */
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
