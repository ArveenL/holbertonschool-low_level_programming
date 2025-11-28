#include <stdlib.h>
#include "dog.h"

/**
 * struct dog - A dog object
 * @name: pointer to the dog's name
 * @age: the dog's age in years
 * @owner: pointer to the owner's name
 * Return: init_dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
