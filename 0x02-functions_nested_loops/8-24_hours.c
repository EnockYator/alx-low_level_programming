#include "main.h"

/**
 *jack_bauer - Prints time of the day
 *Return:0
 */

void jack_bauer(void)
{
	int i_hour;
	int j_hour;
	int k_min;
	int l_min;

	for (i = 0; i <= 2; i++)
	{
		for (j_hour = 0; j_hour <= 9; j_hour++)
		{
			for (k_min = 0; k_min <= 5; k_min++)
			{
				for (l_min = 0; l_min <= 9; l_min++)
				{
					if (i_hour == 2 && j_hour == 3 && k_min == 5 && l_min == 9)
						continue;
					_putchar(i_hour + '0');
					_putchar(j_hour + '0');
					_putchar(':');
					_putchar(k_min + '0');
					_putchar(l_min + '0');
					_putchar('\n')
				}
			}
		}
	}
}
