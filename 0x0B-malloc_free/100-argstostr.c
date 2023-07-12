#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - The function that concatenate a string
 * @ac: The argument's count
 * @av: The argument's value
 * Return: A pointer to the array is returned
 */
char *argstostr(int ac, char **av)
{
	int i, len;
	char *string;

	if ((ac == 0) || (av == NULL))
	{
		return (NULL);
	}
	len = 0;
	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]);
	}

	string = malloc(sizeof(char) * (len + ac) + 1);
	if (string == NULL)
	{
		return (NULL);
	}
	/* concatenate arguments with space */
	string[0] = '\0';
	for (i = 0; i < ac; i++)
	{
		strcat(string, av[i]);
		if (i < ac - 1)
		{
			strcat(string, " ");
		}
	}
	len = strlen(string);
	/* replace space with newline character */
	for (i = 0; i < len; i++)
	{
		if (string[i] == ' ')
		{
			string[i] = '\n';
		}
	}
	string[len] = '\n';
	return (string);
}
