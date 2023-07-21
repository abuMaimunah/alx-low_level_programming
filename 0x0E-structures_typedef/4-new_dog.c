#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - A pointer to the dog_t
 * @name: A pointer to the name member
 * @age: The age
 * @owner: A pointer to the owner member
 * Return: A pointer to the newDog is returned
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
		free(newDog);
		return (NULL);
	}
	newDog->name = strdup(name);
	newDog->owner = strdup(owner);
	newDog->age = age;
	return (newDog);
}
