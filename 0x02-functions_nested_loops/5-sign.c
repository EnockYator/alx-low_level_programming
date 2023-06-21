#include "main.h"

/**
 *print_sign - Checks if a number is positive,negative
 *             or zero returning 1 and + when positive
 *             0 when zero and -1 and - when negative
 *@n:Number to be checked
 *Return:1 if greater than zero,0 if zero, -1 if less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
	else
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
}
