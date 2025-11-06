#include <stdio.h>
#include "main.h"

/**
* _strncpy -  copies as from position 0 instead of NULL
* @dest: destination
* @src: source
* @n: n bytes
*
* Return: pointer to dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && i != '\0'; i++)
	{
		dest[i] = src[i];
	}

	if (i < n)
	{
		i++;
		dest[i] = '\0';
	}

	return (dest);
}
