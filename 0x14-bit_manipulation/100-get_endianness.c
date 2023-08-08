#include "main.h"
#include <stdio.h>
/**
 * get_endianness - check endianness
 * Return: success
 */
int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *byte_ptr = (unsigned char *)&num;

	return (*byte_ptr == 1);
}
