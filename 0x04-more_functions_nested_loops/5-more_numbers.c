#include "main.h"

/**
 *more_numbers - Prints 0 to 14 ten times followed by new line
 *Return:0
 */

void more_numbers(void)
{
	int b;
	int a;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b / 10 != 0)
			{
				_putchar(b / 10 + '0');
			}
			_putchar(b % 10 + '0');
		}
		_putchar('\n');
	}
}
