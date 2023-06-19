#include <stdio.h>

/**
 * main - Prints all possible combinations of two different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 9; i++)
	{
		for (j = (i + 1); j< 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (i == 8 && j == 9)
				continue;
			putchar(44);
			putchar(32);
		}
	}

	putchar('\n');

	return (0);
}
