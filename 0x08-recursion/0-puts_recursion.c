#include "main.h"
#include <stdio.h>
void _puts_recursion(char *s)
{
	while(*s)
	{
		putchar(*s);
		s++;
	}
	putchar('\n');
}
