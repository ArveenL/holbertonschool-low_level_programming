#include "main.h"

/**
    *print_rev - print in reverse
    *@s: parameter that points to first character of string
    *
    * Return: void
    */

void print_rev(char *s)
{
	while(*s != '\0')
	{
		s--;
		_putchar('\0'-1);
	}
	_putchar('\n');
}
