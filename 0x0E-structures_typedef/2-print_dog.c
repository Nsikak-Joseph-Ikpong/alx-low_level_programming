#include "dog.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_dog - A function that prin ts a struct dog
 * @d: pointer to sturct dog to initialize
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
