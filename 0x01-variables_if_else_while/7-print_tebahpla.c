#include <stdio.h>
#include <ctype.h>
/**
 *main - Prins lowercase alphabets in reverse
 *Return:0
 */

int main(void)
{
	int i;
	int j;

	for (i = 'Z'; i >= 'A'; i--)
	{
		j = tolower(i);
		putchar(j);
	}
	putchar('\n');
	return (0);
}
