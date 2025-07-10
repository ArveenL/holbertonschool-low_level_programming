#ifndef MAIN_H
#define MAIN_H

/* Basic I/O functions */
int _putchar(char c);
void _puts(char *str);

/* String manipulation functions */
int _strlen(char *s);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);

/* String concatenation and comparison functions */
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);

/* Array manipulation functions */
void print_array(int *a, int n);
void reverse_array(int *a, int n);

/* String transformation functions */
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);

/* Memory manipulation functions */
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);

#endif /* MAIN_H */
