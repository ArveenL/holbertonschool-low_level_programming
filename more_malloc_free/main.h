#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

/* Function prototypes */
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);

/* _putchar prototype if needed */
int _putchar(char c);

#endif /* MAIN_H */
