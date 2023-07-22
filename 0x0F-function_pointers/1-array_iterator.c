#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * array_iterator - function that executes a function
 * @array: a pointer to an int array
 * @size: Array size
 * @action: The function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL)
	{
		exit(-1);
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
