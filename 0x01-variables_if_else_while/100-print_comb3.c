#include <stdio.h>
int main(void)
{
	int j;
	int k;

	for (j = 48; j <=57; j++)
	{
		for (k = 49; k <=57; k++)
		{
			if (j == k)
				continue;
			putchar(j);
			putchar(k);
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
