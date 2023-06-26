#include "main.h"

/**
 *print_rev - Prints string in reverse order.
 *@s: String
 *Return: Nothing
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
