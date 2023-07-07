#include "main.h"
int _sqrt(int n, int b);

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 0));
}

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
	return _sqrt(n, b + 1);
}
