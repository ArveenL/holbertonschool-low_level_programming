#include "main.h"

 /**
     * _puts - prints string followed by new line
     * @str: parameter holds memory address of first character of the string
     *
     * Return: void
     */

void _puts(char *str)
{

	int i = 0;
	while(*str[i] !='\0')
	{
		putchar(*str[i]);
		i++;
	}
	putchar('\n');

	return;
}






}
