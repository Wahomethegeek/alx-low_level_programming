#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: struct dog to be printed
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	d->name = (d->name != NULL) ? d->name : "(nil)";
	d->owner = (d->owner != NULL) ? d->owner : "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
