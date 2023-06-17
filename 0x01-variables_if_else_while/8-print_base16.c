#include <stdio.h>
/**
 * main - entry point
 * Return: 0 is returned
 */
int main(void)
{
	int ch = 48;

	while (ch <= 102)
	{
		if (ch == 58)
		{
			ch += 39;
			continue;
		}
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
