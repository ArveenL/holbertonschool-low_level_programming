#include <string.h>
#include "dog.h"
#include <stdlib.h>


/**
 * new_dog - new dog struct
 * @name: pointer to the dog's name
 * @age: the dog's age in years
 * @owner: pointer to the owner's name
 *
 * Return: dog_t or NULL if functions fail
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int strlen_name;
	int strlen_owner;

	if (name == NULL || owner == NULL)
	return (NULL);

	new = malloc(sizeof(dog_t));
	if (new == NULL)
	return (NULL);

	strlen_name = strlen(name) + 1;
	new->name = malloc(strlen_name);
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}

	strcpy(new->name, name);

	strlen_owner = strlen(owner) + 1;
	new->owner = malloc(strlen_owner);

	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	new->age = age;

	return (new);
}
