#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - A function to initialize a variable of type struct dog
 * @d: pointer to struct dog to initialze
 * @name: name to initialze
 * @age: age to initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL);
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
