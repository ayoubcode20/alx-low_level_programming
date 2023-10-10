#include "dog.h"

/**
 * init_dog -  initialize a variable of type struct dog
 *
 * @d: a pointer to struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: nothing
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *p = d;

	p = malloc(sizeof(struct dog));

	p->name = name;
	p->age = age;
	p->owner = owner;
}
