#include "variadic_functions.h"

/**
 *print_numbers - prints numbers followed by a newline
 *@separator: string to be printed between numbers
 *@n: number of integers passed to the function
 *Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...);
{
	int num;
	unsigned int i;
	va_list arguments;

	va_start(arguments, n);

	for (i = 0; i < n; ++i)
	{
		num = var_arg(arguments, int);
		if (i > 0 && separator != NULL)
		{
			printf("%s", separator);
		}
		printf("%d", num);
	}
	va_end(arguments);

	printf("\n");
}
