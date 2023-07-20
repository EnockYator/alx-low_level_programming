#include "variadic_functions.h"

/**
 *sum_them_all - returns the sum of all its parameters
 *@n :integer argument
 *Return: Integer
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list arguments;

	if (n == 0)
		return (0);

	va_start(arguments, n);

	for (i = 0; i < n; ++i)
	{
		sum += va_arg(arguments, int);
	}

	va_end(arguments);
	return (sum);
}
