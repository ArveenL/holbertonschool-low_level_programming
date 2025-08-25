#include "main.h"

/**
     * _strlen(char *s) - cal length of a string
     * @s: pointer to a STRING
     *
     * Return: integer
     */

int _strlen(char *s)
{
	int len = 0; //counter to store length of a string

	while(s[len]!=\0)
	{
		len++;
	}

	return len;
}
