#include <stdio.h>
/**
 * flip_bits - count number of bits needed to flip
 * @n: the bit
 * @m: number
 * Return: success
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorResult;
	unsigned int count;

	xorResult = n ^ m;
	count = 0;
	while (xorResult > 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}
	return (count);
}
