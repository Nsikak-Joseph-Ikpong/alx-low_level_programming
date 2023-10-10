#include "dog.h"
/**
 * free_dog - A function that frees the dogs
 * @d: pointer to struct to free the dog
 */
void free_dog(dog_t *d);
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
