#include <stddef.h>
/**
 * int_index - A function that searches for an integer
 * @array: The array that is used
 * @size: The array size
 * @cmp: The function pointer to be used
 * Return: 0 success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL)
	{
		return (-1);
	}
	if (array == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
