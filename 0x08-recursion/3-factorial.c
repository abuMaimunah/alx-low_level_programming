#include "main.h"
/**
 * factorial - A function that returns the factorial of a number
 * @n: The parameter whose factorial is to be found
 * Return: the factorial of the number is returned
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
