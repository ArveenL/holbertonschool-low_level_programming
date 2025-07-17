#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>

/* Function prototypes */

/**
 * create_array - Creates an array of chars and initializes it with a specific char
 * @size: Size of the array to create
 * @c: Character to initialize the array with
 * 
 * Return: Pointer to the array, or NULL if it fails or size is 0
 */
char *create_array(unsigned int size, char c);

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter
 * @str: String to duplicate
 * 
 * Return: Pointer to the duplicated string, or NULL if str is NULL
 *         or if insufficient memory was available
 */
char *_strdup(char *str);

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * 
 * Return: Pointer to a newly allocated space in memory containing
 *         the contents of s1, followed by the contents of s2, and null terminated.
 *         NULL on failure. If NULL is passed, treat it as an empty string.
 */
char *str_concat(char *s1, char *s2);

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers
 * @width: Width of the grid
 * @height: Height of the grid
 * 
 * Return: Pointer to a 2 dimensional array of integers.
 *         Each element of the grid should be initialized to 0.
 *         NULL on failure or if width or height is 0 or negative.
 */
int **alloc_grid(int width, int height);

/**
 * free_grid - Frees a 2 dimensional grid previously created by alloc_grid
 * @grid: The address of the two dimensional grid
 * @height: Height of the grid
 * 
 * Return: Nothing
 */
void free_grid(int **grid, int height);

#endif /* MAIN_H */
