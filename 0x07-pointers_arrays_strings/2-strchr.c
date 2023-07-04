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
	int i = 0;

	for (; *s; i++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (NULL);
}
