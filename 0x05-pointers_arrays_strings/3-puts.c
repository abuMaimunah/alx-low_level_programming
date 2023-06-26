#include "main.h"
/**
 * _puts - Function that prints to stdout
 * @str: The input parameter
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
