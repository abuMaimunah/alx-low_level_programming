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
	int i, j, size;
	int *array;

	if (min > max)
	{
		return (NULL);
	}
	size = 0;
	for (i = min; i <= max; i++)
	{
		size++;
	}
	array = malloc(sizeof(int) * size + 1);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = min, j = 0; i <= max; i++, j++)
	{
		array[j] = i;
	}
	return (array);
}
