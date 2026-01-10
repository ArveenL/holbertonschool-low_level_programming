#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

typedef struct type_print
{
    char *symbol;
    void (*print)(va_list args);
} type_print_t;

void print_char(va_list args)   { printf("%c", va_arg(args, int)); }
void print_int(va_list args)    { printf("%d", va_arg(args, int)); }
void print_float(va_list args)  { printf("%f", va_arg(args, double)); }
void print_string(va_list args)
{
    char *str = va_arg(args, char *);
    if (!str) str = "(nil)";
    printf("%s", str);
}

void print_all(const char * const format, ...)
{
    va_list args;
    type_print_t funcs[] = {
        {"c", print_char},
        {"i", print_int},
        {"f", print_float},
        {"s", print_string},
        {NULL, NULL}
    };
    int i = 0, j;
    char *sep = "";

    va_start(args, format);

    while (format && format[i])
    {
        j = 0;
        while (funcs[j].symbol)
        {
            if (*(funcs[j].symbol) == format[i])
            {
                printf("%s", sep);
                funcs[j].print(args);
                sep = ", ";
            }
            j++;
        }
        i++;
    }

    printf("\n");
    va_end(args);
}

