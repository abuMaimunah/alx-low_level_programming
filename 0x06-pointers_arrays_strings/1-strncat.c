#include "main.h"
/**
 * _strncat - The function for concatenation
 * @dest: The destination pointer
 * @src: The sources string
 * @n: The n bytes to be added
 * Return: The starting address of the concertenated string is returned
 */
char *_strncat(char *dest, char *src, int n)
{
	char *destStart = dest;
	int i;

	while (*dest)
	{
		dest++;
	}
	for (i = 0; i < n; i++)
	{
		*dest = src[i];
		dest++;
	}
	*dest = '\0';
	return (destStart);
}
