#include "dog.h"

/**
 * free_dog - a function that frees dogs
 *
 * @d: a pointer to a struct
 *
 * Return: nothing
*/

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->age);
	free(d->owner);
}
