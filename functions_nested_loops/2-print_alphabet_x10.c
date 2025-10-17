#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times
 * @void: No parameters
 *
 * Description: Uses a nested loop to print all lowercase letters
 *
 * Return: Nothing (void)
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char j;

	while (i <= 10)
	{
		for (j = 'a'; j <= 'z'; j++)
		_putchar('j');
		_putchar('\n');
	}
	i++;
}
