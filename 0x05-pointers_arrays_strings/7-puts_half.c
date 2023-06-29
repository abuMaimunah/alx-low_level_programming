#include "main.h"
/**
 * puts_half - The function definition
 * @str: The char pointer
 */
void puts_half(char *str)
{
	int len;
	int i;

	for (len = 0; str[len]; len++)
	{
	}
	for (i = (len + 1) / 2; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
