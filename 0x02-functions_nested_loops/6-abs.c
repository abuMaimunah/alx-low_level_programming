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
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
