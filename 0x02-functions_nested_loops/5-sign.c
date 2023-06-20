#include "main.h"
/**
 * print_sign - It prints the sign of an integer
 * @n: The parameter n representing the integer
 * Return: 1 for +ve, 0 for 0 and -1 for -ve
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
