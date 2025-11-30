#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: pointer to the dog's name
 * @age: the dog's age in years
 * @owner: pointer to the owner's name
 *
 * Description: Creates a new dog structure and allocates memory for it.
 * Copies name and owner strings into the structure.
 *
 * Return: pointer to new dog_t, or NULL if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int strlen_name;
	int strlen_owner;
	int i;

	if (name == NULL || owner == NULL)
		return (NULL);

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	i = 0;
	while (name[i])
		i++;
	strlen_name = i + 1;

	new->name = malloc(strlen_name);
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}

	i = 0;
	while (name[i])
	{
		new->name[i] = name[i];
		i++;
	}
	new->name[i] = '\0';

	i = 0;
	while (owner[i])
		i++;
	strlen_owner = i + 1;

	new->owner = malloc(strlen_owner);
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	i = 0;
	while (owner[i])
	{
		new->owner[i] = owner[i];
		i++;
	}
	new->owner[i] = '\0';

	new->age = age;

	return (new);
}
