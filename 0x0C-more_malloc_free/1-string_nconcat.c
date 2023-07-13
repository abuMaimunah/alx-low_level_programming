#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 , len2;
	char *dyna;
	
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
	if (n >= len2)
	{
		dyna = malloc(sizeof(char) * (len1 + len2) + 1);
	}
	else
	{
		dyna = malloc(sizeof(char) * (len1 + n) + 1);
	}
	if (dyna == NULL)
	{
		return (NULL);
	}
	strcpy(dyna, s1);
	if (n >= len2)
	{
		strcat(dyna, s2);
	}
	else
	{
		strncat(dyna, s2, n);
	}
	/**
	for(i = 0; i < (len1 + len2); i++)
	{
		dyna[i] = string[i];
	}
	dyna[len1 + len2] = '\0'; */
	return (dyna);

}
