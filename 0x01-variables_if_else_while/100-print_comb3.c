#include <stdio.h>

/**
 *main - main block
 *Return:0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = (i + 1); j <= 9; j++)
		{
			if (i != j)
			{
				putchar(i + '0');
				putchar(j + '0');

				if (i == 8 && j == 9)
					continue;

				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
