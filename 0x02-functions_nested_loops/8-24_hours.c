#include "main.h"

/**
 * jack_bauer - This function prints every minute of the day
 */

void jack_bauer(void)
{
	int minute;

	int hour = 0;

	while (hour <= 23)
	{
		minute = 0;

		while (minute <= 59)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
		minute++;
	}
	hour++;
}
