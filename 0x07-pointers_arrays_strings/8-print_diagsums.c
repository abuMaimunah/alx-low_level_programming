#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of the two diagonals
 * @a: A pointer array
 * @size: The size of the array
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 += a[i * size + j];
			}
			else if ((i + j) == (size - 1))
			{
				sum2 += a[i * size + j];
			}
		}
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
