#include "main.h"
/**
 * _memset - A function that fills memory with a constant byte
 * @s: The char pointer to the array
 * @b: The byte to fill the mem location with
 * @n: The first n bytes
 * Return: A pointer to the memory area s is returned
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (start);
}
