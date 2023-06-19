#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - variable of type struct dog is initialised
 * @d: pointing to the dog to be initialised
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
