#include "main.h"
#include <unistd.h>
/**
 * _puts_recursion - A function that prints a string
 * @s: A pointer to the string
 */
void _puts_recursion(char *s)
{
	while (*s)
	{
		write(1, s, 1);
		s++;
	}
	write(1, "\n", 1);
}
