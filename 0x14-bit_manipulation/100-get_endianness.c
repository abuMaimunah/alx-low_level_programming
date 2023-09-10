#include <stdio.h>
#include "main.h"
/**
 * get_endianness - check endianness
 * Return: success
 */
int get_endianness(void)
{
	unsigned int num;
	unsigned char *bytePtr;

	num = 1;
	bytePtr = (unsigned char *)&num;
	return ((bytePtr[0] == 1) ? 1 : 0);
}
