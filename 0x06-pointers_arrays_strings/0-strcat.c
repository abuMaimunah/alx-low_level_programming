#include "main.h"
/**
 * _strcat - A function that concatenate a string
 * @dest: A char pointer to the destination array
 * @src: A char pointer to the src array
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int len = 0;

	while (*src)
	{
		len++;
		src++;
	}
	for (i = 0; i < len; i++)
	{
		dest = dest + src[i];
	}
	return (dest);
}
