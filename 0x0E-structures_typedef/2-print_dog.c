#include "dog.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_dog - A function that prints struct dog
 * @d: A pointer to the struct dog
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %f\n", (d->age) ? d->age : 0);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
