#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - printt a number
 * @separator: Separator
 * @n: The number of variable arg
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j;
	int num;
	va_list list;

	va_start(list, n);
	if (separator == NULL)
	{
		return;
	}
	for (i = 0; i < n; i++)
	{
		num = va_arg(list, unsigned int);
		printf("%d", num);
		if (i < (n - 1))
		{
			for (j = 0; separator[j] != '\0'; j++)
			{
				printf("%c", separator[j]);
			}
		}
	}
	printf("\n");
	va_end(list);
}
