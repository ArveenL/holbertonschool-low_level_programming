#include <stdio.h>
#include "main.h"

/**
* _strncat - concatenates 2 strings until either n byte or NULL
* @dest : destination
* @scr : source
* @n : n amount of bytes
*
* Return: pointer to dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++; /* sets index i at NULL */
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
