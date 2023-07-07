#include "main.h"
/**
 * _strlen_recursion - Write a function that returns the length of a string
 * @s: The char pointer
 * Return: the length of the string is returned
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return 0;
	}
	return (1 + _strlen_recursion(s + 1));
}
