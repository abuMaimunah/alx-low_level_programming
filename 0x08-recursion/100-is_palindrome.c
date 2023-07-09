#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * is_palindrome - A function that checks palindrome
 * @s: The char array pointer
 * Return: 1 success
 */
int is_palindrome(char *s)
{
	int length = strlen(s);
	int i, j;

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		if (s[i] != s[j])
		{
			return (0);
		}
	}
	return (1);
}
