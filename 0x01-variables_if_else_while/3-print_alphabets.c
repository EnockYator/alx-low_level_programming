#include <stdio.h>
#include <ctype.h>
/**
 *main - main block
 *Description:Print alphabet in uppercase
 *Return:0
 */
int main(void)
{
	int i, x, j, y;

	for (i = 'A'; i <= 'Z'; i++)
	{
		x = tolower(i);
		putchar(x);
	}
	for (j = 'a'; j <= 'z'; j++)
	{
		y = toupper(j);
		putchar(y);
	}
	putchar('\n');
	return (0);
}
