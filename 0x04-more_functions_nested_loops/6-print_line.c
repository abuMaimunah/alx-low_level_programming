#include "main.h"
/**
 * print_line - print generic amount of line
 * @n: - the number of line
 */
void print_line(int n)
{
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (j = 0; j < n; j++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
