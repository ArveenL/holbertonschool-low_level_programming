#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog to print
 *
 * Description: Prints the name, age, and owner of a dog structure.
 * If d is NULL, prints nothing.
 * If name or owner is NULL, prints (nil) instead.
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	return;

	if (d->name != NULL)
	printf("Name: %s\n", d->name);
	else
	printf("Name: (nil)\n");

	printf("Age: %1f\n", d->age);

	if (d->owner != NULL)
	printf("Owner: %s\n", d->owner);
	else
	printf("Owner: (nil)\n");
}
