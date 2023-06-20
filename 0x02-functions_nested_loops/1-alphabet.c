#include "main.h"

/**
 *main - Calls print_alphabet()
 *Return:0
 */
int main(void)
{
	print_alphabet();
	return (0);
}

/**
 *print_alphabet - Prints alphabets in lowercase
*/

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; ++i)
	{
		putchar(i);
	}

	putchar('\n');
}
