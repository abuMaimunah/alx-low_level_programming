#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
	int n;

	for (n = 0; n <= 2359; n++)
	{
		int hours = n / 100;
		int minutes = n % 100;

		_putchar(hours);
		_putchar(':');
		_putchar(minutes);
		_putchar('\n');
	}
}
