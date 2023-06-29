#include "main.h"
#include <stdio.h>
/**
 * print_array - Function that prints n number of elemenet
 * @a: - integer array
 * @n: - number of element to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
