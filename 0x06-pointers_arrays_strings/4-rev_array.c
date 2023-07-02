#include "main.h"
/**
 * reverse_array - Reverses an array
 * @a: The pointer to an integer array
 * @n: The length of the array
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		int temp = a[start];

		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
