#include "main.h"
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * binary_to_uint - Convert binary to an int
 * @b: Pointer to the binary string
 * Return: the decimal equivalent is returned
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, sum;

	if (b == NULL)
	{
		return (0);
	}
	sum = 0;
	for (i = 0; i < strlen(b); i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		sum = (sum << 1) | (b[i] - '0');
	}
	return (sum);
}
