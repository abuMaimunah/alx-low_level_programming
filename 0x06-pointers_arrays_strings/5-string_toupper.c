#include "main.h"
/**
 * string_toupper - Function that converts characters to upper
 * @s: The char pointer
 * Return: The start position of the pointer is returned
 */
char *string_toupper(char *s)
{
	char *start = s;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - ('a' - 'A');
		}
	}
	return (start);
}
