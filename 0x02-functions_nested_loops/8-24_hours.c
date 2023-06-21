#include "main.h"

/**
 *jack_bauer - Prints time of the day
 *Return:0
 */

void jack_bauer(void)
{
	int i_hour;
	int j_minute;

	for (i_hour = 0; i_hour <= 23; i_hour++)
	{
		for (j_minute = 0; j_minute <= 59; j_minute++)
		{
			_putchar((i_hour / 10) + '0');
			_putchar((i_hour % 10) + '0');
			_putchar(':');
			_putchar((j_minute / 10) + '0');
			_putchar((j_minute % 10) + '0');
			_putchar('\n');
		}
	}
}
