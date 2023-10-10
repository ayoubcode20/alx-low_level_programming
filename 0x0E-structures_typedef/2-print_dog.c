#include "dog.h"

/**
 * print_dog - a function that prints a struct dog
 *
 * @d: a pointer to struct dog
 *
 * Return: nothing
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
