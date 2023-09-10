#include <stdio.h>
#include "main.h"
/**
 * set_bit - Set a particular bit
 * @n: The number
 * @index: the index
 * Return: sucess
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
	{
		return (-1);
	}
	mask = 1UL << index;
	*n |= mask;
	return (1);
}
