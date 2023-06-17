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
		for (j = 0; j <= 9; j++)
		{
			if (i != j)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i <= 9 || j < 8)
				{
					if (i == 9 && j == 8)
						continue;
					putchar(44);
					putchar(32);
				}
			}
			if (i == 9 && j == 9)
				break;
		}
	}
	putchar('\n');
	return (0);
}
