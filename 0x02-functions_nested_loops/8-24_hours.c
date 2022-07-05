#include "main.h"
/**
 * jack_bauer - prints the minutes from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			if (hour < 10)
			{
				_putchar('0');
			}
			_putchar(hour);
			_putchar(':');
			if (minute < 10)
			{
				_putchar('0');
			}
			_putchar(minute);
			_putchar('\n');
		}
	}

}
