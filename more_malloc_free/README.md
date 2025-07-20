# More malloc, free

This project focuses on dynamic memory allocation in C using `malloc`, `free`, and related concepts. It covers proper memory management practices and common pitfalls to avoid.

## Learning Objectives

At the end of this project, you should be able to explain:
- How to use `malloc` and `free`
- Why and when to use `malloc`
- How to use `valgrind` to check for memory leaks
- The difference between automatic and dynamic allocation
- How to properly handle memory allocation failures

## Requirements

### General
- Allowed editors: `vi`, `vim`, `emacs`
- All files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Code should use the Betty style (checked using `betty-style.pl` and `betty-doc.pl`)
- Not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are `malloc`, `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden
- Allowed to use `_putchar`
- The prototypes of all functions and the prototype of the function `_putchar` should be included in the header file called `main.h`

## Header File

```c
#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);

#endif
```

## Tasks

### 0. Trust no one (mandatory)
**File:** `0-malloc_checked.c`

Write a function that allocates memory using malloc.

- **Prototype:** `void *malloc_checked(unsigned int b);`
- Returns a pointer to the allocated memory
- If malloc fails, the malloc_checked function should cause normal process termination with a status value of 98

**Example:**
```c
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
    char *c;
    int *i;
    float *f;
    double *d;

    c = malloc_checked(sizeof(char) * 1024);
    printf("%p\n", (void *)c);
    i = malloc_checked(sizeof(int) * 402);
    printf("%p\n", (void *)i);
    f = malloc_checked(sizeof(float) * 100000000);
    printf("%p\n", (void *)f);
    d = malloc_checked(INT_MAX);
    printf("%p\n", (void *)d);
    free(c);
    free(i);
    free(f);
    free(d);
    return (0);
}
```

### 1. string_nconcat (mandatory)
**File:** `1-string_nconcat.c`

Write a function that concatenates two strings.

- **Prototype:** `char *string_nconcat(char *s1, char *s2, unsigned int n);`
- The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated
- If the function fails, it should return NULL
- If n is greater or equal to the length of s2 then use the entire string s2
- If NULL is passed, treat it as an empty string

**Example:**
```c
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *concat;

    concat = string_nconcat("Best ", "School !!!", 6);
    printf("%s\n", concat);  // Output: Best School
    free(concat);
    return (0);
}
```

### 2. _calloc (mandatory)
**File:** `2-calloc.c`

Write a function that allocates memory for an array, using malloc.

- **Prototype:** `void *_calloc(unsigned int nmemb, unsigned int size);`
- The _calloc function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory
- The memory is set to zero
- If nmemb or size is 0, then _calloc returns NULL
- If malloc fails, then _calloc returns NULL

**Example:**
```c
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *a;

    a = _calloc(98, sizeof(char));
    strcpy(a, "Best");
    strcpy(a + 4, " School! :)\n");
    a[97] = '!';
    simple_print_buffer(a, 98);
    free(a);
    return (0);
}
```

### 3. array_range (mandatory)
**File:** `3-array_range.c`

Write a function that creates an array of integers.

- **Prototype:** `int *array_range(int min, int max);`
- The array created should contain all the values from min (included) to max (included), ordered from min to max
- Return: the pointer to the newly created array
- If min > max, return NULL
- If malloc fails, return NULL

**Example:**
```c
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *a;

    a = array_range(0, 10);
    simple_print_buffer(a, 11);
    free(a);
    return (0);
}
```

## Compilation

All files will be compiled this way:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <main_file.c> <function_file.c> -o <output_name>
```

## Testing

Each task includes a main file for testing. You can compile and run them to verify your implementations work correctly.

## Memory Management Best Practices

1. **Always check malloc return value** - malloc can fail and return NULL
2. **Free allocated memory** - Every malloc should have a corresponding free
3. **Don't use freed memory** - Accessing freed memory leads to undefined behavior
4. **Don't free the same memory twice** - This leads to undefined behavior
5. **Use valgrind** - Check for memory leaks and errors: `valgrind ./your_program`

## Common Pitfalls

- **Memory leaks** - Forgetting to free allocated memory
- **Double free** - Calling free twice on the same pointer
- **Use after free** - Using a pointer after it has been freed
- **Buffer overflow** - Writing beyond allocated memory boundaries
- **Uninitialized pointers** - Using pointers that haven't been properly initialized

## Repository

- **GitHub repository:** holbertonschool-low_level_programming
- **Directory:** more_malloc_free

