#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees a dog structure
 * @d: pointer to dog_t structure to free
 *
 * Description: Frees all memory allocated for a dog structure,
 * including the name and owner strings, and the structure itself.
 * If d is NULL, does nothing.
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	return;

	free(d->name);
	free(d->owner);
	free(d);
}
