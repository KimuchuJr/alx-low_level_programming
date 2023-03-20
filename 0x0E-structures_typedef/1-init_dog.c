#include "dog.h"

/**
 * init_dog - Structure for a dog attribute
 *
 * @d: Structure pointer
 * @name: Dog name
 * @age: Dog age
 * @owner: Name of dog's owner
 *
 */
void init_dog(struct dog*d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
