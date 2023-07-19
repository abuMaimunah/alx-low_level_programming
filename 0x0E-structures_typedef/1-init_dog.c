#include "dog.h"
/**
 * init_dog - A function that initialize a var of type struct dog
 * @d: A pointer to a var of type dog
 * @name: A pointer to its name member
 * @age: The age meber
 * @owner: A pointer to its owner member
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		exit(98);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
