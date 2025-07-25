#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated space containing concatenated string,
 * or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j, len1, len2;

	/* Treat NULL as empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate lengths */
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;

	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	/* Allocate memory */
	concat = malloc((len1 + len2 + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	/* Copy first string */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	/* Copy second string */
	for (j = 0; j < len2; j++)
		concat[i + j] = s2[j];

	/* Null terminate */
	concat[i + j] = '\0';

	return (concat);
}
