#include "main.h"
/**
 * puts2 - Function definition
 * @str: - my char pointer
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
