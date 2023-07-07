#include "main.h"
#include <stdio.h>

/**
 *main - prints name of the function followed by new line
 *@argc: Number of command line arguments
 *@argv: Array containing the program command line arguments
 * Return: Nothing
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
