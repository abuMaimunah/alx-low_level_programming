#include "main.h"
/**
 * print_to_98 - print natural numbers from n to 98
 * @n: - the starting parameter
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		_putchar(i + '0');
		if (i <= 97)
		{
		_putchar(',');
		_putchar(' ');
		}
	}
}
