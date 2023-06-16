#include <stdio.h>
#include <ctype.h>
/**
 *main - main block
 *Description:Print alphabets in lowercase except q and e
 *Return:0
 */
int main(void)
{
	int x;
	int i;

	for (x = 'A'; x <= 'Z'; x++)
	{
		i = tolower(x);
		if ((i != 'q') && (i != 'e'))
		{
		putchar(i);
		putchar('\n');
		}
	}
	return (0);
}
