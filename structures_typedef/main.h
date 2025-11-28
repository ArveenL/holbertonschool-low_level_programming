#ifndef MYHEADER_H
#define MYHEADER_H

int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

/**
 * struct dog - A dog object
 * @name: pointer to the dog's name
 * @age: the dog's age in years
 * @owner: pointer to the owner's name
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

/* Prototype for init_dog */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* MYHEADER_H */

