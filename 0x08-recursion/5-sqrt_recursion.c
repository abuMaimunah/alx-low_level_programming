#include "main.h"
/**
 * _sqrt_recursion - A function that returns the natural square
 * root of a number
 * @n: The number
 * @b: the number to be used
 * Return: The square root of the natural number
 */
int _sqrt(int n, int b);

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 0));
}
/**
 * _sqrt - finds the square root of the number
 * @n: The inputed number
 * @b: The number to be used
 * Return: The returned value
 */
int _sqrt(int n, int b)
{
	if (b * b == n)
	{
		return (b);
	}
	else if (b * b > n)
	{
		return (-1);
	}
	return (_sqrt(n, b + 1));
}
