#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
char *argstostr(int ac, char **av)
{
	int i, j, start, end, len;
	char *string;
	if((ac == 0) || (av == NULL))
	{
		return (NULL);
	}
	start = 0;
	end = 0;
	len = 0;
	for(i = 0; i < ac; i++)
	{
		len += strlen(av[i]);
	}

	string = malloc(sizeof(char) * (len + ac + 1));
	if (string == NULL)
	{
		return (NULL);
	}

	/* concatenate arguments with space */
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
			end = i - 1;
			for (j = start; j <= end; j++)
			{
				string[j] = '\n';
			}
			start = i + 1;
		}
	}
	return (string);
}
