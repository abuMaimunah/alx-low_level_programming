#include <stdio.h>
/**
 * get_bit - Get bit at an index
 * @n: bit
 * @index: index
 * Return: success
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = 1UL << index;
	return ((n & mask) ? 1 : 0);
}
