#include <stdio.h>
/**
 * main - entry point
 * Return: 0 is returned
 */
int main(void)
{
	int n=0;

	while (n <= 9)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar('\n');
	return (0);
}
