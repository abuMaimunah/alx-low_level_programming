#include "main.h"
/**
 * print_alphabet - prints a to z
 * Return: 0 is returned
 */
void print_alphabet(void)
{
	int n = 97;

	while (n <= 122)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
