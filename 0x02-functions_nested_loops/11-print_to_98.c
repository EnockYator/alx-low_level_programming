#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - Prints all natural numbers to 98
 *@n: The beginning number
 *Return:0
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}
	printf("98");
	putchar('\n');
}
