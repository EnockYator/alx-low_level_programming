
#include "main.h"

/**
 *print_last_digit - Prints last digit of a number
 *@num: The number to be checked
 *Return:0
 */

int print_last_digit(int num)
{
	int dig;

	if (num < 0)
	{
		dig = (-1 * (num % 10));
		_putchar(dig + '0');
		return (dig);
	}
	else
	{
		dig = (num % 10);
		_putchar(dig + '0');
		return (dig);
	}
}
