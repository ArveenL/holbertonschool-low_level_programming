#include "main.h"

 /**
     * _puts - prints string followed by new line
     * @str: parameter holds memory address of first character of the string
     *
     * Return: void
     */

void _puts(char *str)
{
	while(*str != '\0')
	{
		putchar(*str);
		*str++;
	}
	putchar('\n');
	
	return;
}






}
