#include <stdio.h>
#include "main.h"

/**
 * _strlen - checks lenght of string
 * @s: char to use
 *
 * Return: 0 if success
 */

int _strlen(char *s)
{
	int len = 0; /* to count char by adding 1 to each chat iteration */

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
