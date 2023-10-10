#ifndef DOG_H
#define DOG_H

/**
 * struct dog - the new data type defined
 * @name: the first element
 * @age: the second element
 * @owner: the third element
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/*dog_t *new_dog(char *name, float age, char *owner);*/
/*void free_dog(dog_t *d);*/

/*new dog type*/
typedef struct dog dog_t;
#endif
