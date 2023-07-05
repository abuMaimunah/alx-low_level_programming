#include "main.h"
#include <stddef.h>
/**
 * _strstr - A function that locates a substring
 * @haystack: Char pointer to the string
 * @needle: The substring
 * Return: 0 success
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
	{
		return (haystack);
	}
	for (i = 0; haystack[i]; i++)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			for (; needle[j]; j++)
			{
				if (haystack[i + j] == needle[j])
				{
					continue;
				}
				else
				{
					break;
				}
			}
			return (&haystack[i]);
		}
	}
	return (NULL);
}
