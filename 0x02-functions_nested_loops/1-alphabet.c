#include "main.h"
/**
 * main - entry point
 * Return: 0 is returned
 */
/**
 * print_alphabet() - prints letter a to z
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
