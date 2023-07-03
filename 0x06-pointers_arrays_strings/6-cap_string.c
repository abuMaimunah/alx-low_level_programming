#include "main.h"
/**
 * cap_string - Function that capitalize words based on some 
 * seperators
 * @s: The char pointer
 * Return: The starting position is returned
 */
char *cap_string(char *s)
{
	char *start = s;
	int i;

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] = s[0] - ('a' - 'A');
	}
	for (i = 1; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'z') && (s[i - 1] == ' ' || s[i - 1] == '\n' || s[i - 1] == '\t' || s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' || s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '\"' || s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}'))
		{
			s[i] = s[i] - ('a' - 'A');
		}
	}
	return (start);
}
