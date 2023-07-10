#include "main.h"
#include <string.h>
#include <stdlib.h>
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, newLen;
	char *copy;

	len1 = strlen(s1);
	len2 = strlen(s2);
	copy = malloc((sizeof(char) * len1) + (sizeof(char) * (len2 + 1)));
	if (copy == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len2; i++)
	{
		s1 += s2[i];
	}
	newLen = strlen(s1);
	for (i = 0; i < newLen; i++)
	{
		copy[i] = s1[i];
	}
	copy[newLen] = '\0';
	return (copy);

}
