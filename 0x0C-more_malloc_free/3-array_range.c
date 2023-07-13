#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * array_range - A function that creates an array of integers
 * @min: The startming number
 * @max: The end number
 * Return: the returned pointer
 */
int *array_range(int min, int max)
{
	int i, size;
	int *array;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	array = malloc(sizeof(int) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}	return (array);
}
