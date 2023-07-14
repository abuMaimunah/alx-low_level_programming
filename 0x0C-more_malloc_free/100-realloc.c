#include "main.h"
#include <stdlib.h>
/**
 * _realloc - A function that reallocates a memory using malloc
 * @ptr: The pointer to the previously allocated memory
 * @old_size: Size of the previous array
 * @new_size: The size of the new array
 * Return: The new allocated memory is returned
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(old_size + new_size);
	if (new_ptr != NULL)
	{
		free(ptr);
	}
	else
	{
		return (NULL);
	}
	return (new_ptr);

}
