#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search
 * @accept: string containing the bytes to match
 *
 * Return: number of bytes in the initial segment of s
 *         which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int i = 0, j;
    int match;

    while (s[i] != '\0')
    {
        match = 0;
        j = 0;
        while (accept[j] != '\0')
        {
            if (s[i] == accept[j])
            {
                match = 1;
                break;
            }
            j++;
        }

        if (match == 0)
            break;

        i++;
    }

    return (i);
}

