#include "dog.h"

/**
 * struct dog - A dog object
 * @name: pointer to the dog's name
 * @age: the dog's age in years
 * @owner: pointer to the owner's name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	// Store the name string pointer into the struct's name field
	d->name = name;
	// Store the age number into the struct's age field
	d->age = age;
	// Store the owner string pointer into the struct's owner field
	d->owner = owner;
}
