#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strdup - duplicates string
* @str: string to duplicate
*
* Return: NULL if malloc fails else return new string
*/

char *_strdup(char *str)
{
	char *new_str;
	int i = 0;
	int j = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	new_str = malloc((i + 1) * sizeof(char));

	if (new_str == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= i; j++)
	{
		new_str[j] = str[j];
	}
	return (new_str);
}
