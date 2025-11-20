#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* str_concat - concatenates 2 strings.
* @s1: string 1
* @s2: string 2
*
* Return: NULL if malloc fails, else return pointer to conca-string
*/

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j, k, l = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	concat = malloc((i + j + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
	{
		concat[l] = s1[k];
		l++;
	}

	for (k = 0; k < j; k++)
	{
		concat[l] = s2[k];
		l++;
	}

	concat[l] = '\0';

	return (concat);
}
