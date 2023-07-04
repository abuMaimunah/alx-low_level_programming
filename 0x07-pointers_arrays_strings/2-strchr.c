#include "main.h"
#include <stddef.h>
/**
 * _strchr - A function that returns the first occurence of a ch
 * @s: The char array
 * @c: The letter whoes occurence is to be found
 * Return: success is returned
 */
char *_strchr(char *s, char c)
{
	char *null = "NULL";

	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
