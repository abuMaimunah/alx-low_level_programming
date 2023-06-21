#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print natural numbers from n to 98
 * @n: - the starting parameter
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		int i;

		for(i = n; i >= 98; i--)
		{
			printf("%d, ", i);
		}
		printf("\n");
	}
	else if (n < 98)
	{
		int i;

		for (i = n; i <= 98; i++)
		{
			printf("%d, ", i);
		}
		printf("\n");
	}
	else
	{
		printf("%d", n);
	}
}
