#include <stdio.h>
/**
 * main - entry point
 * Return: 0 is returned
 */
int main(void)
{
	int asciv = 48;

	while (asciv <= 57)
	{
		putchar(asciv);
		asciv++;
	}
	putchar('\n');
	return (0);
}
