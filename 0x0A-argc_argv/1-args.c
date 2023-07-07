#include "main.h"
#include <stdio.h>

/**
 * main - Prints number of arguments passed to the function
 * @argc: Number of command line arguments
 * @argv: Array containing the program command line arguments
 *
 * Return: Nothing.
 */
int main(int argc, char *argv[])
{
	int count;

	(void)argv;
	for (count = 0; count < argc; count++)
	{
		if (count + 1 == argc)
			printf("%i\n", count);
	}
	return (0);
}
