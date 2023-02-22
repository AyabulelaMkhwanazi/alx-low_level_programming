#include "main.h"

/**
 * jack_bauer - This function prints every minute of the day
 */
void jack_bauer(void)
{
	int hour1;
	int hour2;
	int minute1;
	int minute2;
	int c;
	
	hour2 = 0;
	while (hour2 <= 2)
	{
		if (hour2 == 2)
		{
			c = 3;
		}
		
		hour1 = 0;
		while (hour1 <= c)
		{
			minute2 = 0;
			while (minute2 <= 5)
			{
				minute1 = 0;
				while (minute1 <= 9)
				{
					_putchar('0' + hour2);
					_putchar('0' + hour1);
					_putchar(':');
					_putchar('0' + minute2);
					_putchar('0' + minute1);
					_putchar('\n');
					minute1++;
				}
				minute2++;
			}
			hour1++;
		}
		hour2++;
	}
}
