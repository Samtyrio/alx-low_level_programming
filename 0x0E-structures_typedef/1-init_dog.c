#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable type of dog
 * @d: poppy
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 *
 * Return: what is needed
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
