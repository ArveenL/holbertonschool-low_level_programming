#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * 
 * Return: Pointer to a newly allocated space in memory containing
 *         the contents of s1, followed by the contents of s2, and null terminated.
 *         NULL on failure. If NULL is passed, treat it as an empty string.
 */
char *str_concat(char *s1, char *s2)
{
    char *concatenated;
    int i, j, len1, len2;

    /* Treat NULL as empty string */
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    /* Calculate lengths of both strings */
    len1 = 0;
    while (s1[len1] != '\0')
        len1++;

    len2 = 0;
    while (s2[len2] != '\0')
        len2++;

    /* Allocate memory for concatenated string (+1 for null terminator) */
    concatenated = malloc((len1 + len2 + 1) * sizeof(char));

    /* Return NULL if malloc fails */
    if (concatenated == NULL)
        return (NULL);

    /* Copy s1 to concatenated */
    for (i = 0; i < len1; i++)
        concatenated[i] = s1[i];

    /* Copy s2 to concatenated after s1 */
    for (j = 0; j < len2; j++)
        concatenated[i + j] = s2[j];

    /* Add null terminator */
    concatenated[i + j] = '\0';

    return (concatenated);
}
