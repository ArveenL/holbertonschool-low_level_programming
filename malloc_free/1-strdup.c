#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
* _strdup - returns a pointer to a newly allocated copy(space) of str
* @str: string to dup
*
* Return: pointer to dup string or NULL if string is NULL
*/

char *_strdup(char *str)
{

	int len = 0;
	char *dup;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	dup = malloc((len + 1) * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		dup[i] = str[i];
	}

	dup[len] = '\0';

	return (dup);
}
