#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter
 * @str: String to duplicate
 * 
 * Return: Pointer to the duplicated string, or NULL if str is NULL
 *         or if insufficient memory was available
 */
char *_strdup(char *str)
{
    char *duplicate;
    int i, len;

    /* Return NULL if str is NULL */
    if (str == NULL)
        return (NULL);

    /* Calculate the length of the string */
    len = 0;
    while (str[len] != '\0')
        len++;

    /* Allocate memory for the duplicate string (+1 for null terminator) */
    duplicate = malloc((len + 1) * sizeof(char));

    /* Return NULL if malloc fails */
    if (duplicate == NULL)
        return (NULL);

    /* Copy the string */
    for (i = 0; i <= len; i++)
        duplicate[i] = str[i];

    return (duplicate);
}
