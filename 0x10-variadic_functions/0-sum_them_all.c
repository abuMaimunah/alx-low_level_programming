#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - A function that takes variable arg
 * @n: named parameter
 * Return: sum is retured
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int total = 0;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		total += va_arg(list, const unsigned int);
	}
	va_end(list);
	return (total);
}
