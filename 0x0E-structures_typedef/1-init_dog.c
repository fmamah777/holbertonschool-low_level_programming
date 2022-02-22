#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function being used
 * @d: pointer that points to dog
 * @name: parameter that popints to the name
 * @owner: parameter that points to owner
 * @age: float age parameter ?
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
