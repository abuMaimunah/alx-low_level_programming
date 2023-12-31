#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - A function that returns a pointer to a newly all. space
 * @str: The array
 * Return: The newly allocated copy is returned
 */
char *_strdup(char *str)
{
	int len, i;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);
	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		copy[i] = str[i];
	}
	copy[len] =  '\0';
	return (copy);
}
