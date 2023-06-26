#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

/**
 *checksum - checksum
 *@s: String
 *Return: Checksum
 */

unsigned long checksum(char *s)
{
unsigned long sum = 0;
while (*s != 0)
{
	sum += *s;
	s++;
}
return (sum);
}

/**
 * main - Prints password generated randomly
 * Return: 0
 */

int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQSTUVWXYZ";
	char s[33];
	unsigned long sum;
	int j;
	int flag = 0;

	srand(time(NULL));
	while (flag == 0)
	{
		for (j = 0; j < 33; j++)
		{
			s[j] = alpha[rand() % (sizeof(alpha) - 1)];
		}
		s[j] = '\0';
		sum = checksum(s);
		if (sum == 2772)
		{
			flag = 1;
			printf("%s", s);
		}
	}
return (0);
}
