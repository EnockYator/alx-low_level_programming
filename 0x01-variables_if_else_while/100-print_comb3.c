/**
 *File:100-print_comb3.c
 *Author:Enock Yator
 */
#include <stdio.h>

/**
 *main - Prints all possible different combinations of two digits
 *       separated by comma followed by space
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
			if (i != j);
			{
			putchar(i + '0');
			putchar(j + '0');					
			}

			if (i == 9 && j == 9)
				break;
			putchar(44);
			putchar(32);
			
		}
	}
	putchar('\n');
	return (0);
}
