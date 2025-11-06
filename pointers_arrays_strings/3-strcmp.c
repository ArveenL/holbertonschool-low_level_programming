#include <stdio.h>
#include "main.h"

/**
* _strcmp - compares stings
* @s1: string1
* @s2: sting 2
*
* Return: 0 if same,-ve if s1<s2,+ve if s1>s2
*/

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}

		return (s1[i] - s2[i]);
}
