#include "main.h"
/**
 * check_prime - functions that checks for prime
 * is_prime_number - The function that returns prime number
 * @n: The number to be checked
 * @b: the comparer
 * Return: 0 or 1 is returned
 */
int check_prime(int n, int b);

int is_prime_number(int n)
{
	return check_prime(n, 2);
}
int check_prime(int n, int b)
{
	if (n <= 1 || (n != b && n % b == 0))
	{
		return (0);
	}
	else if (n == b)
	{
		return (1);
	}
	return (check_prime(n, b + 1));
}
