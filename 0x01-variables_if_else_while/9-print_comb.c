#include <stdio.h>
/**
 *main - Prints all possible combination of digit numbers
 *Return:0
 */

int main(void)
{
	int num;
	int comma;
	int space;

	for (num = 0; num <= 9; num++)
	{
		comma = 44;
		space = 32;
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
