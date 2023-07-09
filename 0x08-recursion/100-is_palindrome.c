#include <stdio.h>
#include <string.h>
/**
 * is_palindrome_helper - A function that checks palindrome
 * @s: The char array pointer
 * @start: Start
 * @end: End
 * Return: 1 success
 */
int is_palindrome_helper(char *s, int start, int end)
{
	/* Base case: Empty string or single character is a palindrome */
	if (start >= end)
	{
		return (1);
	}
	/* Check if the first and last characters match */
	if (s[start] != s[end])
	{
		return (0); /* Not a palindrome */
	}
    /* Recursively check the substring without the first and last characters */
	return (is_palindrome_helper(s, start + 1, end - 1));
}
/**
 * is_palindrome - CHeck for palindrome
 * @s: Char array
 * Return: 1 success
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	return (is_palindrome_helper(s, 0, length - 1));
}
