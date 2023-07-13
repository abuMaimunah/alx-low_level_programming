#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - A function that allocates memory for an array
 * @nmemb: The number of element
 * @size: each elements size
 * Return: The allocated memory is returned
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	__attribute__((unused)) unsigned int i;
	void *mem;
	unsigned int len;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	len = nmemb * size;
	mem = malloc(nmemb * size + 1);
	if (mem == NULL)
	{
		return (NULL);
	}
	memset(mem, 0, len);
	return (mem);
}
