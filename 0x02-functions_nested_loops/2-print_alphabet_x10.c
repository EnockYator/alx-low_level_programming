#include "main.h"
/**
 *print_alphabet_x10 - Prints alphabet in lowercase
 *                       ten times followed by newline
 */

void print_alphabet_x10(void)
{
	int i = 1;
	int j;

	while (i <= 10)
	{
		for (j = 'a'; j <= 'z'; ++j)
		{
			_putchar(j);
		}
		_putchar('\n');
		i++;
	}

	_putchar('\n');
}


