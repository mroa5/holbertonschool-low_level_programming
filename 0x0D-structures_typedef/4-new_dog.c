#include "dog.h"
#include <stdlib.h>

/**
 *
 *
 *
 *
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

	return(doggy);
}
