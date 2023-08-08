#include "main.h"
#include <stdio.h>
/**
 * get_bit - get the ebit
 * @n: The number
 * @index: required index
 * Return: the value of bit at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	mask = 1UL << index;
	return ((n & mask) ? 1 : 0);
}
