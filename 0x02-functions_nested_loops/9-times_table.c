#include "main.h"

/**
 *times_table - Prints 9 times table
 *Return:0
 */

void times_table(void)
{
	int i;
	int mult;
	int product;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			product = i * mult;

			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + '0');
			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
