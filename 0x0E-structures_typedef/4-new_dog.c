#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: what is needed
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	int i, lame, loner;

	my_dog = malloc(sizeof(*my_dog));
	if (my_dog == NULL || !(name) || !(owner))
	{
		free(my_dog);
		return (NULL);
	}

	for (lame = 0; name[lame]; lame++)
		;

	for (loner = 0; owner[loner]; loner++)
		;

	my_dog->name = malloc(lame + 1);
	my_dog->owner = malloc(loner + 1);

	if (!(my_dog->name) || !(my_dog->owner))
	{
		free(my_dog->owner);
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}

	for (i = 0; i < lame; i++)
		my_dog->name[i] = name[i];
	my_dog->name[i] = '\0';

	my_dog->age = age;

	for (i = 0; i < loner; i++)
		my_dog->owner[i] = owner[i];
	my_dog->owner[i] = '\0';

	return (my_dog);
}
