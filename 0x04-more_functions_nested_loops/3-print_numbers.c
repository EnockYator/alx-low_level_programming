#include "main.h"

/**
 *print_numbers - Print numbers 0 to 9 followed by
 *a new line
 *Return:void
 */
void print_numbers(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		_putchar(num);
	}

	_putchar('\n');
}
