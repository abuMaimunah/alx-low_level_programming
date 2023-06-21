#include "main.h"
/**
 * print_last_digit - returns last digit of a number
 * @n: The paramter representing the number
 * Return: It returns the last digit
 */
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (ld < 0)
	{
		_putchar(-ld + '0');
		return (-ld);
	}
	else
	{
		_putchar(ld + '0');
		return (ld);
	}
}
