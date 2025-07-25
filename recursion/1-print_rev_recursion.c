#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to the string to print
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);  /* Go to end first */
	_putchar(*s);                 /* Print on way back */
}
