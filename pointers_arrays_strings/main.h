#ifndef MAIN_H /* header guard */
#define MAIN_H /* prevents double inclusion */

/* Function prototype: changes value of int to 98 */
void reset_to_98(int *n);

/* Function prototype: swaps value of two ints */
void swap_int(int *a, int *b);

/* Function that counts lenght of string */
int _strlen(char *s);

int _putchar(char c);
void _puts(char *str);
int _putchar(char c);
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
/* Function prototypes(more) */
int _putchar(char c);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
/* Function prototupe(more2) */
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);

#endif /* closes header guard MAIN_H */
