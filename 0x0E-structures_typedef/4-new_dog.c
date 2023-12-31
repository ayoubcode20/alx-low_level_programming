#include "dog.h"

/**
 * _strdub - dublicates a string
 *
 * @str: a string pointer
 *
 * Return: pointer to a string
*/

char *_strdub(char *str)
{
	char *s;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	s = malloc((len + 1) * (sizeof(char)));

	if (s == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		s[i] = str[i];

	return (s);
}

/**
 * new_dog - function that creates a new dog.
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to the structer
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
		return (NULL);

	ptr->name = _strdub(name);

	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->age = age;

	ptr->owner = _strdub(owner);

	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}

	return (ptr);
}
