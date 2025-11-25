#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* string_nconcat - concatenates 2 strings
* @s1: string 1
* @s2: string 2
* @n: number of bytes from s2 to concatenate
*
* Return: pointer to newly allocated string containing s1 + n bytes from s2. 
	  Returns NULL on failure
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1 = 0; unsigned int len_s2 = 0;
	unsigned int i = 0; unsigned int j = 0;
	char *pointer;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len_s1] != '\0')
	{
		len_s1++;
	}

	while (s2[len_s2] != '\0')
	{
		len_s2++;
	}

	if (n >= len_s2)
	{
		n = len_s2;
	}

	pointer = malloc(len_s1 + len_s2 + 1);
	
	if (pointer == NULL)
	{
		return (NULL);
	}
	
	for (i = 0; i < len_s1; i++)
	{
		pointer[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		pointer[i + j] = s2[j];
	}

	pointer[i + j] = '\0';
	
	return (pointer);
}
