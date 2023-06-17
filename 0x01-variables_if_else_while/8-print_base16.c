#include <stdio.h>
#include <ctype.h>
/**
 *main - Prints all numbers of base 16 in lowercase
 *Return:0
 */

int main(void)
{
	int num;
	char l;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
	}
	for (l = 'a'; l <= 'f'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
