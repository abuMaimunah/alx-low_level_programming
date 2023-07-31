#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - Print anything
 * @format: the format 
 */
void print_all(const char * const format, ...)
{
	char c, *s;
	int i;
	float f;
	const char *format_ptr;

	va_list args;
	va_start(args, format);
	format_ptr = format;
	while (*format_ptr != '\0')
	{
		if (*format_ptr == 'c')
		{
			c = (char)va_arg(args, int);
			printf("%c", c);
		}
		else if (*format_ptr == 'i')
		{
			i = va_arg(args, int);
			printf("%d", i);
		}
		else if (*format_ptr == 'f')
		{
			f = (float)va_arg(args, double);
			printf("%f", f);
		}
		else if (*format_ptr == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", s);
			}
		}
		else
		{

		}
		format_ptr++;
	}
	va_end(args);
	printf("\n");
}
