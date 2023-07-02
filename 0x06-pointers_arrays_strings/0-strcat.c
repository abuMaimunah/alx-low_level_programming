#include "main.h"
/**
 * _strcat - A function that concatenate a string
 * @dest: A char pointer to the destination array
 * @src: A char pointer to the src array
 */
char *_strcat(char *dest, char *src)
{
	char *destStart = dest;

	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (destStart);
}
