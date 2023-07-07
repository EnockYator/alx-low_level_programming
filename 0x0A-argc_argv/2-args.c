#include "main.h"
#include <stdio.h>

/**
 * main - Prints all arguments it receives
 * @argc: Number of command line arguments
 * @argv: Array containing the program command line arguments.
 * Return: Nothing.
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
