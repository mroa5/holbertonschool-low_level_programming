#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - new dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: doggy
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *doggy;

	doggy = malloc(sizeof(struct dog));
	if (doggy == NULL)
		return (NULL);
	doggy->name = name;
	doggy->age = age;
	doggy->owner = owner;

	return (doggy);
}
