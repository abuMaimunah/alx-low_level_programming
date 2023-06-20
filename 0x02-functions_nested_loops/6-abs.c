#include "main.h"
/**
 * _abs - Computer the absolute value of an integer
 * @n: The parameter n whose absolute value will be computed
 * Return: 0 is returned which denote success
 */
int _abs(int n)
{
	if (n >= 0)
	{
		_putchar(n);
	}
	else
	{
		n = n * -1;
		_putchar(n);
	}
	return (0);
}
