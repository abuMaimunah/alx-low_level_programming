#include <stddef.h>
#include <stdlib.h>
/**
 * array_iterator - function that executes a function
 * @array: a pointer to an int array
 * @size: Array size
 * @action: The function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action == NULL)
	{
		exit(-1);
	}
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
