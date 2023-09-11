#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - that prints a struct dog
 * @d: pointer
 * @name: dog's name
 * @owner: ownmer's name
 * @age: dog's age
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if(d->name == NULL)
		d->name = "(nil)";
	printf("Name: %s\n", d->name);
	printf("Owner: %s\n", d->owner);
	printf("Age: %f\n", d->age);
	return;
}
