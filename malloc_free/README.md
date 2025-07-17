# malloc_free

This project contains C functions that demonstrate dynamic memory allocation and deallocation using `malloc` and `free`. Each function handles different aspects of memory management in C programming.

## Project Structure

```
malloc_free/
├── README.md
├── main.h
├── 0-create_array.c
├── 1-strdup.c
├── 2-str_concat.c
├── 3-alloc_grid.c
└── 4-free_grid.c
```

## Function Descriptions

### 0. Float like a butterfly, sting like a bee
**File:** `0-create_array.c`  
**Prototype:** `char *create_array(unsigned int size, char c);`

Creates an array of characters and initializes it with a specific character.
- Returns `NULL` if `size = 0`
- Returns a pointer to the array, or `NULL` if memory allocation fails

### 1. The woman who has no imagination has no wings
**File:** `1-strdup.c`  
**Prototype:** `char *_strdup(char *str);`

Returns a pointer to a newly allocated space in memory containing a copy of the string given as parameter.
- Returns `NULL` if `str = NULL`
- Memory is allocated with `malloc` and can be freed with `free`
- Returns `NULL` if insufficient memory is available

### 2. He who is not courageous enough to take risks will accomplish nothing in life
**File:** `2-str_concat.c`  
**Prototype:** `char *str_concat(char *s1, char *s2);`

Concatenates two strings into a newly allocated memory space.
- The returned pointer contains `s1` followed by `s2`, null-terminated
- If `NULL` is passed, it's treated as an empty string
- Returns `NULL` on failure

### 3. If you even dream of beating me you'd better wake up and apologize
**File:** `3-alloc_grid.c`  
**Prototype:** `int **alloc_grid(int width, int height);`

Returns a pointer to a 2-dimensional array of integers.
- Each element of the grid is initialized to `0`
- Returns `NULL` on failure
- Returns `NULL` if `width` or `height` is `0` or negative

### 4. It's not bragging if you can back it up
**File:** `4-free_grid.c`  
**Prototype:** `void free_grid(int **grid, int height);`

Frees a 2-dimensional grid previously created by the `alloc_grid` function.
- Properly deallocates all memory allocated for the grid
- Prevents memory leaks

## Compilation

All files are compiled with the following flags:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89
```

## Usage Examples

### Create Array
```c
char *buffer = create_array(98, 'H');
if (buffer == NULL) {
    printf("failed to allocate memory\n");
    return (1);
}
// Use buffer...
free(buffer);
```

### String Duplication
```c
char *s = _strdup("Duplicated");
if (s == NULL) {
    printf("failed to allocate memory\n");
    return (1);
}
printf("%s\n", s);
free(s);
```

### String Concatenation
```c
char *s = str_concat("Best ", "School");
if (s == NULL) {
    printf("failed\n");
    return (1);
}
printf("%s\n", s);
free(s);
```

### 2D Grid Allocation
```c
int **grid = alloc_grid(6, 4);
if (grid == NULL) {
    return (1);
}
// Use grid...
free_grid(grid, 4);
```

## Memory Management

All functions properly handle:
- Memory allocation failures
- Null pointer inputs
- Proper memory deallocation to prevent leaks

## Testing

Each function has been tested with:
- Valid inputs
- Edge cases (NULL pointers, zero sizes)
- Memory leak detection using Valgrind

## Repository

**GitHub repository:** holbertonschool-low_level_programming  
**Directory:** malloc_free

## Author

This project is part of the Holberton School curriculum focusing on dynamic memory allocation in C programming.
