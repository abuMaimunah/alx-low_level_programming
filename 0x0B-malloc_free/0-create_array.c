#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - Create an array of chars
 * @size: The size of the array
 * @c: The first char
 * Return: the pointer to the array is returned
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	ar = malloc(sizeof(char) * size);
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
