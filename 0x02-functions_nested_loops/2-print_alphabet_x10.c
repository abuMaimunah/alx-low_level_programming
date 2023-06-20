#include "main.h"
/**
 * print_alphabet_x10 - prints a to z
 * Return: 0 is returned
 */
void print_alphabet_x10(void)
{
	int c = 0;

	while (c < 5)
	{
        	int n = 97;

        	while (n <= 122)
        	{
                	_putchar(n);
                	n++;
        	}
        	_putchar('\n');
		c++;
	}
}
