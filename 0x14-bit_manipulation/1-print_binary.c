#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_binary - Print binary
 * @n: The decimal number
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int flag;

	if (n == 0)
	{
		_putchar('0');
	}
	mask = 1UL << (sizeof(n) * 8 - 1);
	flag = 0;
	while (mask > 0)
	{
		if ((n & mask) != 0)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
}
