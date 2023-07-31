#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - printt a number
 * @separator: Separator
 * @n: The number of variable arg
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j;
	char *string;
	va_list list;

	va_start(list, n);
	if (separator == NULL)
	{
		return;
	}
	for (i = 0; i < n; i++)
	{
		string = va_arg(list, char*);
		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
		printf("%s", string);
		}
		if (i < (n - 1) && separator != NULL)
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
