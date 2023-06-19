#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 successful
 */
int main(void)
{
	int j;
	int k;

	for (j = '0'; j <= '8'; j++)
	{
		for (k = j + 1; k <= '9'; k++)
		{
			putchar(j);
			putchar(k);
			if (j != '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
