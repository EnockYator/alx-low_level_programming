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
		for (num = 48; num <= 62; num++)
		{
			_putchar(num);
		}
		_putchar('\n');
		i++;
	}
}
