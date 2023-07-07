#include "main.h"
/**
 * _pow_recursion - A function that recursively finds the pow of a number
 * @x: The index
 * @y: The power
 * Return: The result is returned
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
