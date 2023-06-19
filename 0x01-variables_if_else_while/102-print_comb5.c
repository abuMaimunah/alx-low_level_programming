#include <stdio.h>
/**
 * main - entry point
 * Return: 0 for success
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 99; i++)
	{
		for (j = 1; j <= 99; j++)
		{
			putchar('0' + i / 10);
			putchar('0' + i % 10);
			putchar(' ');
			putchar('0' + j / 10);
			putchar('0' + j % 10);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
