#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Write a function that searches a string
 * @s: The string
 * @accept: The char array
 * Return: 0 sucess
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
