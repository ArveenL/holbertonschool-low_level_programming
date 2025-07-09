#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: starting address (where to start filling)
 * @b: the byte value to fill with
 * @n: how many bytes to fill
 *
 * Return: pointer to the original memory area (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

