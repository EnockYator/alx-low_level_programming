#include "main.h"

/**
 *more_numbers - Prints 0 to 14 ten times followed by new line
 *Return:0
 */

void more_numbers(void)
{
	int num;
	int i = 1;

	while (i <= 10)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num <= 9)
			{
				_putchar(num + '0');
			}
			else
			{
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
			}
		}
		_putchar('\n');
		i++;
	}
}
