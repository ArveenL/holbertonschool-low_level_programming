#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: maximum number of bytes to take from s2
 *
 * Return: pointer to newly allocated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int len1 = 0, len2 = 0, i, j;
    char *result;

    /* Treat NULL as empty string */
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    /* Calculate lengths of s1 and s2 */
    while (s1[len1] != '\0')
        len1++;
    while (s2[len2] != '\0')
        len2++;

    /* If n is greater than length of s2, use entire s2 */
    if (n > len2)
        n = len2;

    /* Allocate memory for concatenated string + null terminator */
    result = malloc(sizeof(char) * (len1 + n + 1));
    if (result == NULL)
        return (NULL);

    /* Copy s1 to result */
    for (i = 0; i < len1; i++)
        result[i] = s1[i];

    /* Copy first n bytes of s2 to result */
    for (j = 0; j < n; j++)
        result[i + j] = s2[j];

    /* Null-terminate the new string */
    result[i + j] = '\0';

    return (result);
}

