#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * array_iterator - function that executes a function
 * @array: a pointer to an int array
 * @size: Array size
 * @action: The function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i, len = 0;

	if (action == NULL)
	{
		exit(-1);
	}
	while (*array)
	{
		len++;
		array++;
	}
	if (len != size)
	{
		exit(-2);
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
