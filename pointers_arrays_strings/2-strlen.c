#include "main.h"

/**
     * _strlen(char *s) - cal length of a string
     * @s: pointer to a STRING
     *
     * Return: integer
     */

int _strlen(char *s)
{
	int len = 0; 

	while(s[len]!=\0)
	{
		len++;
	}

	return len;
}
