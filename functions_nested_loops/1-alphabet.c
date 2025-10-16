#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - lowercase _putchar
 * Description: This function prints all the letters of the English
 * alphabet in lowercase, from 'a' to 'z', followed by a newline.
 *
 * Return: void
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
