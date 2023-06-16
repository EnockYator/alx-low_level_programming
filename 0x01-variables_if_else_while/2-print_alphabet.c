#include <stdio.h>
#include <ctype.h>

/**
 *main - main block
 *Description: Print alphabet in lowercase
 *Return:0
 */
int main(void)
{
	int i;
	int x;

	for (i = 'A'; i <= 'Z'; i++)
	{
		x = tolower(i);
		putchar(x);
	}
	return (0);
}
