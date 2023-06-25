#include "main.h"
/**
 * print_square - a function that prints square depending on the sz
 * @size: the size of the swuare
 */
void print_square(int size)
{
	int j;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (j = 0; j < size; j++)
	{
		for (k = 0; k < size; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
