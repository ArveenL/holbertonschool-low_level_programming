#ifndef MY_DOG
#define MY_DOG

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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void print_dog(struct dog *d);





#endif
