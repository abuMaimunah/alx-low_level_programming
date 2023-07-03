#include "main.h"
/**
 * _memcpy - Function that copies memory area
 * @dest: destination pointer
 * @src: source pointer
 * @n: n bytes from source
 * Return: returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;
	unsigned int i;

	if (dest > src && (dest < src + n))
	{
		for (i = n; i > 0; i--)
		{
			dest[i - 1] = src[i - 1];
		}
		return (start);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			dest[i] = src[i];
		}
		return (start);
	}
}
