#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string, or NULL if str is NULL or fails
 */
char *_strdup(char *str)
{
	char *dup;
	int i, len;

	if (str == NULL)
		return (NULL);

	/* Calculate length of string */
	len = 0;
	while (str[len] != '\0')
		len++;

	/* Allocate memory for duplicate string */
	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);

	/* Copy string */
	for (i = 0; i <= len; i++)
		dup[i] = str[i];

	return (dup);
}
