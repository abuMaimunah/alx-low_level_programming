#include <stdio.h>
/**
 * main - entry point
 * Return: 0 is returned
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar('%c', ch);
	}
	putchar('\n');
	return (0);
}
