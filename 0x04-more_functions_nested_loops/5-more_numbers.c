#include "main.h"
/**
 * more_numbers - prints numbers with some format
 */
void more_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		int b;

		for (b = 0; b <= 14; b++)
		{
			if (b <= 9)
			{
				_putchar(b + '0');
			}
			else
			{
				int tens;
				int ones;

				tens = b / 10 + '0';
				ones = b % 10 + '0';
				_putchar(tens);
				_putchar(ones);
			}
		}
		_putchar('\n');
	}
}	
