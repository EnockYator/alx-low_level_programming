#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - main block
 *Return:0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("Last digit of n is and is greater than 5\n");
	else if (n < 6 && n != 0)
		printf("Last digit of n is and is less than 6 and not 0\n");
	else
		printf("Last digit of n is and is 0\n");
	return (0);
}
