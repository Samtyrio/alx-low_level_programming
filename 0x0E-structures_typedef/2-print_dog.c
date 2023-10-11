#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - loves to pring dogs
 * @d: dog name lover
 * Return: what is needed
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("name: %s\n", d->name);
	}
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
