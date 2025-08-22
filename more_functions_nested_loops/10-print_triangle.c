#include "main.h"

 /**
     * void print_triangle - prints triangle
     * @int size - parameter/user input
     * @int i - row
     * @int j - column
     * Return: void
     */

void print_triangle(int size)
{
    int i, j;

    if (size <= 0)
    {
        _putchar('\n');
        return;
    }

    for (i = 1; i <= size; i++)
    {
        /* Print spaces */
        for (j = 1; j <= size - i; j++)
        {
            _putchar(' ');
        }

        /* Print # */
        for (j = 1; j <= i; j++)
        {
            _putchar('#');
        }

        _putchar('\n');
    }
}

