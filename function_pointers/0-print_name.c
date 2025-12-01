#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name by calling-back f()
 * @name: pointer to the name string
 * @f: pointer to function that takes a char * and returns void
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
