#include "main.h"
void puts2(char *str)
{
	int i = 0;

	for (; str[i]; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
