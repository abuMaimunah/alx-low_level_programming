#include "main.h"
#include <stdio.h>
/**
 * flip_bits - flip bits
 * @n: number of bits to count
 * @m: number of bits to be flipped
 * Return: count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result > 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}
	return (count);
}
