#include <stdio.h>
/**
 *main - Prints all posible combinations of three
 *       digits separated by comma and space
 *Return:0
*/
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 7; ++i)
	{
		for (j = (i + 1); j <= 8; ++j)
		{
			for (k = (j + 1); k <= 9; ++k)
			{
				if (i != j && j != k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');

					if (i == 7 && j == 8 && k == 9)
						continue;

					putchar(44);
					putchar(32);
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
