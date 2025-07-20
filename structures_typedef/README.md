# C - Structures, typedef

This project focuses on understanding and using structures and typedef in C programming. It covers defining structures, initializing them, accessing their members, and using typedef to create new type names.

## Learning Objectives

At the end of this project, you should be able to explain:
- What are structures, when, why and how to use them
- How to use typedef
- How to access structure members
- How to initialize structures
- How to dynamically allocate memory for structures

## Requirements

### General
- Allowed editors: `vi`, `vim`, `emacs`
- All files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Code should use the Betty style (checked using `betty-style.pl` and `betty-doc.pl`)
- Not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are `printf`, `malloc`, `free` and `exit`
- The prototypes of all functions should be included in the header file called `dog.h`
- Don't forget to push your header file
- All header files should be include guarded

## Header File

The header file `dog.h` should contain:
- The definition of `struct dog`
- The typedef for `dog_t`
- All function prototypes

## Tasks

### 0. Poppy (mandatory)
**File:** `dog.h`

Define a new type `struct dog` with the following elements:
- `name`, type = `char *`
- `age`, type = `float`
- `owner`, type = `char *`

### 1. A dog is the only thing on earth that loves you more than you love yourself (mandatory)
**File:** `1-init_dog.c`

Write a function that initializes a variable of type `struct dog`.

**Prototype:** `void init_dog(struct dog *d, char *name, float age, char *owner);`

### 2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad (mandatory)
**File:** `2-print_dog.c`

Write a function that prints a `struct dog`.

**Prototype:** `void print_dog(struct dog *d);`
- You are allowed to use the standard library
- If an element of `d` is `NULL`, print `(nil)` instead of this element
- If `d` is `NULL` print nothing

**Format:**
```
Name: [name]
Age: [age]
Owner: [owner]
```

### 3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read (mandatory)
**File:** `dog.h`

Define a new type `dog_t` as a new name for the type `struct dog`.

### 4. A door is what a dog is perpetually on the wrong side of (mandatory)
**File:** `4-new_dog.c`

Write a function that creates a new dog.

**Prototype:** `dog_t *new_dog(char *name, float age, char *owner);`
- You have to store a copy of `name` and `owner`
- Return `NULL` if the function fails

### 5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg (mandatory)
**File:** `5-free_dog.c`

Write a function that frees dogs.

**Prototype:** `void free_dog(dog_t *d);`

## Compilation

All files will be compiled this way:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 [main_file.c] [function_file.c] -o [output_name]
```

## Examples

### Task 0 & 3 Example:
```c
#include <stdio.h>
#include "dog.h"

int main(void)
{
    struct dog my_dog;
    dog_t my_dog2;  /* After task 3 */

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
```

### Task 1 Example:
```c
#include <stdio.h>
#include "dog.h"

int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
```

### Task 2 Example:
```c
#include <stdio.h>
#include "dog.h"

int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    print_dog(&my_dog);
    return (0);
}
```
Output:
```
Name: Poppy
Age: 3.500000
Owner: Bob
```

### Task 4 Example:
```c
#include <stdio.h>
#include "dog.h"

int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    return (0);
}
```

### Task 5 Example:
```c
#include <stdio.h>
#include "dog.h"

int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    free_dog(my_dog);
    return (0);
}
```

## Memory Management

- When using `new_dog()`, make sure to use `free_dog()` to avoid memory leaks
- The `new_dog()` function allocates memory for the structure and copies of the strings
- The `free_dog()` function frees the structure and all its allocated string members

## Testing with Valgrind

Test your memory management:
```bash
valgrind ./your_program
```

Should show:
```
All heap blocks were freed -- no leaks are possible
ERROR SUMMARY: 0 errors from 0 contexts
```

## Repository

- **GitHub repository:** holbertonschool-low_level_programming
- **Directory:** structures_typedef

