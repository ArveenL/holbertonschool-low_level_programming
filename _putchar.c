#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}

/* ========================================= */

/* File: main.h */
#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void print_most_numbers(void);

#endif
