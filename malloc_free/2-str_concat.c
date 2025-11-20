#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
    char *concat;
    int i = 0, j = 0, k, l = 0;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    /* calculate lengths of s1 and s2 */
    while (s1[i] != '\0')
        i++;
    while (s2[j] != '\0')
        j++;

    /* allocate memory for concatenated string (+1 for '\0') */
    concat = malloc((i + j + 1) * sizeof(char));
    if (concat == NULL)
        return NULL;

    /* copy s1 into concat */
    for (k = 0; k < i; k++)
        concat[l++] = s1[k];

    /* copy s2 into concat */
    for (k = 0; k < j; k++)
        concat[l++] = s2[k];

    /* null terminate */
    concat[l] = '\0';

    return concat;
}
