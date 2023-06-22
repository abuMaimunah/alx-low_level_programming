#include "main.h"
/**
 * times_table - Generate 9x time table
 */
void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			_putchar(k + '0');
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
