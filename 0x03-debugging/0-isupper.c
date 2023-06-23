#include "main.h"
/**
 * _isupper - checks if a letter is uppercase
 * @c - the parameter to be checked
 * Return: 1 for true and 0 for false
 */
int _isupper(int c)
{
	if (c >=65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
