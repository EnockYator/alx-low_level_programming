 #include "variadic_functions.h"

/**
 *print_all - Prints different types of data
 *@format: list of types of arguments passed to the function
 *Return: Nothing
 */

void print_all(const char * const format, ...)
{
	char c, *s;
	int i;
	float f;
	va_list arguments;

	va_start(arguments, format);
	while (*format)
	{
		if (*format == '%')
		{
			switch (*format)
			{
			case 'c':
				c = (char) va_arg(arguments, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(arguments, int);
				printf("%d", i);
				break;
			case 'f':
				f = (float) va_arg(arguments, double)
					printf("%f", f);
			case 's':
				s = va_arg(arguments, char*);
				if (s != NULL)
					printf("%s", s);
				else
					printf("(nil)");
				break;
			default:
				break;
			}
		}
		else
			printf("%c", *format);
	}
	va_end(arguments);
	printf("\n");
}
