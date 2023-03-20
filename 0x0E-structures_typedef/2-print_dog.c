#include <stdio.h>
#include "dog.h"

/**
 * print_dog -Dog attributres printed in a formatted output
 *
 * @d: The pointer to the dog attributes
 *
 */
void print_dog(struct dog*d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		printf("Age: %.6f\n", d->age);
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
