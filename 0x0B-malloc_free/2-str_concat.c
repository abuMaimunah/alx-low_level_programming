#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - A function that concatenates two strings
 * @s1: First string
 * @s2: Second string
 * Return: A copy is returned
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j;
	char *copy;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	copy = malloc((sizeof(char) * len1) + (sizeof(char) * (len2 + 1)));
	if (copy == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		copy[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		copy[i + j] = s2[j];
	}
	copy[len1 + len2] = '\0';
	return (copy);

}
