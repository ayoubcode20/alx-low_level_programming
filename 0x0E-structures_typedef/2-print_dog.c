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
	if (d)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: %s\n", "nil");
		if (d->age != NULL)
			printf("Age: %lf\n", d->age);
		else
			printf("Age: %s\n", "nil");
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: %s\n", "nil");
	}
}
