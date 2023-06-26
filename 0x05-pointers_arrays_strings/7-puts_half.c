#include "main.h"

/**
 *puts_half - Print cahracters in a string
 *@str: The string
 *Return: Nothing
 */

void puts_half(char *str)
{
int ind = 0;
int n;


	while (str[ind] != '\0')
	{
		ind++;
	}
	if (ind % 2 == 1)
	{
		n = (ind + 1) / 2;
		while (str[n] != '\0')
		{
		_putchar(str[n]);
		n++;
		}
	}
	else
	{
		n = (ind / 2);
		while (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
