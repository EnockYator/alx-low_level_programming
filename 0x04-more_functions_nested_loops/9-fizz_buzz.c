#include <stdio.h>

/**
 *main - Prints 1 to 100 with Fizz instead of multiples of 3
 *       Buzz instead of multiples of 5 and FizzBuzz instead
 *       of multiples of both 3 and 5
 *Return:0
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
		}
		else if (num % 5 == 0)
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else if ((num % 3 == 0) && (num % 5 == 0))
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else
		{
			_putchar(num + '0');
		};
	}
	_putchar('\n');
	return (0);
}
