#include <stdio.h>
#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: destination
* @src: source
*
* Return: pointer to dest
*/

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;             /* i stops at NULL */
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;             /* to make space to src[j] */
		j++;
	}
	return (dest);
}
