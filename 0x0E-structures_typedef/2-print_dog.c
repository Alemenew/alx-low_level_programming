#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print function
 * @d: holds elements of struct dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	else if (d->name == NULL)
		d->name =  "(nil)";
	else if (d->owner == NULL)
		d->owner = "(nul)";

	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owber: %s\n", d->owner);
	}
}
