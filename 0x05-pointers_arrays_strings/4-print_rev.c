#include "main.h"
/**
 * print_rev - The function that prints in reverse order
 * @s: The string parameter
 */
void print_rev(char *s)
{
	int count;
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	for (count = len - 1; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
