#include <stdio.h>
/**
 *main - Prints all possible combination of digit numbers
 *Return:0
 */

int main(void)
{
	int num;
	char comma;
	char space;

	for (num = 0; num <= 9; num++)
	{
		comma = ',';
		space = ' ';
		putchar(num + '0');
		if ((num + '0') != '9')
		{
		putchar(comma);
		putchar(space);
		}
	}
	putchar('\n');
	return (0);
}
