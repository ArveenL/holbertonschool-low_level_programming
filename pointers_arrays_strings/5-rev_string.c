#include <stdio.h>
#include "main.h"

/**
* rev_string - reverse string
* @s: string
*
* Return: void
*/

void rev_string(char *s)
{
	int l = 0;
	int r = 0;
	char temp;

	while (s[r] != '\0')
	{
		r++;
	}

	temp = s[l];
	s[l] = s[r];
	s[r] = temp;

	l++;
	r--;
}
