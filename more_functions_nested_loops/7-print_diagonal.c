#include "main.h"

/**
 * print_diagonal - prints diagonal
 * @n: function parameter/user input
 * @i: row iteration
 * @j: column iteration
 *
 * Return: void
 */
void print_diagonal(int n)
{
    int i, j;

    if (n <= 0)
    {
        _putchar('\n'); 
        return;
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            _putchar(' ');
        }
        _putchar('\\'); 
        _putchar('\n');
    }
}

