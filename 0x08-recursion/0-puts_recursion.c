#include "main.h"
#include <unistd.h>

void _puts_recursion(char *s)
{
	while(*s)
	{
		write(1, s, 1);
		s++;
	}
	write(1, "\n", 1);
}
