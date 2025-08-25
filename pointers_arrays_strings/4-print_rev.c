#include "main.h"

/**
    *print_rev - print in reverse
    *@s: parameter that points to first character of string
    *
    * Return: void
    */

void print_rev(char *s)
{
	int len=0;
	int i;

	while(s[len]!='\0')
	{
		len++;
	}

	for(i=0;i<=len;i--)
	{
		_putchar(i);
	}
	_putchar('\n');
}
