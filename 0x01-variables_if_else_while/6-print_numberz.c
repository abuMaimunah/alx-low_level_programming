#include <stdio.h>
/**
 * main - entry point
 * Return: 0 is returned
 */
int main(void)
{
	char ch = 48;

	while (ch <= 57)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
