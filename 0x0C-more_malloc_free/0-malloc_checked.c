#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Dynamically allocate memory
 * @b: The size
 * Return: the pointer to the location
 */
void *malloc_checked(unsigned int b)
{
	void *dyna;

	dyna = malloc(b);
	if (dyna == NULL)
	{
		exit(98);
	}
	return (dyna);
}
