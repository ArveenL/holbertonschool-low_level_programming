#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* str_concat - concatenates s1 and s2
* @s1: s1
* @s2: s2
*
* Return: pointer to new string or NULL if fails
*/

char *str_concat(char *s1, char *s2)
{
	/* cal length of s1 and loop counter */
	int len1 = 0;
	int i = 0;

	/* cal length of s2 and loop counter */
	int len2 = 0;
	int j = 0;

	/* pointer to new concatenated string */
	char *new_str;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	new_str = malloc(sizeof(char) * (len1 + (len2 + 1)));

	if (new_str == NULL)
	{
		return (NULL);
	}

	while (i < len1)
	{
		new_str[i] = s1[i];
		i++;
	}

	while (j < len2)
	{
		new_str[i] = s2[j];
		i++;
		j++;
	}

	new_str[i] = '\0';

	return (new_str);
}
