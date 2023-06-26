#include "main.h"
/**
 * _strlen - A function that returns the length of a string
 * @s: The string parameter
 * Return: the length of the string is returned
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
