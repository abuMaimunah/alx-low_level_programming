#include <stddef.h>
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; *s; i++)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
