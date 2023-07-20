#include "variadic_functions.h"

/**
 *print_strings - prints strings followed by a new line
 *@separator: string to be printed between the strings
 *@n: number of strings passed to the function
 *Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *str;
	va_list arguments;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(arguments, const char*);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}

	va_end(arguments);
	printf("\n");
}
