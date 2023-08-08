#include "main.h"
#include <stdio.h>
int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *byte_ptr = (unsigned char *)&num;

	return (*byte_ptr == 1);
}
