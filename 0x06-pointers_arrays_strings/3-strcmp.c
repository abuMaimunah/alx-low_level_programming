#include "main.h"
/**
 * _strcmp - The compare function
 * @s1: The first string
 * @s2: The second string
 * Return: 0, 15 0r -15 is returned
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 < *s2)
		{
			return (-15);
		}
		else if (*s1 > *s2)
		{
			return (15);
		}
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	return ((unsigned char)*s1 - (unsigned char)*s2));
}
