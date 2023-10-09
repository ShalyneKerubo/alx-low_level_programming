#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to the 'struct dog'
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog owner
 *
 * Return: void
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *ptr;

	ptr = d;
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
}
