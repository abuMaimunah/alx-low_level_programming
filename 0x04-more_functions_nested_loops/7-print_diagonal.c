#include "main.h"
/**
 * print_diagonal - print diagonal
 * @n: input parameter
 */
void print_diagonal(int n)
{
	int j;

	j = 0;
	if (n <= 0)
	{
		_putchar('\n');
	}
	while (j < n)
	{
		int k;

		for (k = 0; k < j; k++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		j++;
	}
}
