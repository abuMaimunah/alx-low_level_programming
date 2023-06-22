#include "main.h"
#include <stdio.h>
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
			printf("%d", k);
			if (j < 9)
			{
				printf(",");
				printf(" ");
			}
			if (i == 0 || j == 0)
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
