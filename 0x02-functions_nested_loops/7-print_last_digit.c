#include "main.h"
/**
 * print_last_digit - returns last digit of a number
 * @n: The paramter representing the number
 * Return: It returns the last digit
 */
int print_last_digit(int n)
{
	int ld = n % 10;
	
	_putchar(ld);
	return (ld);
}
