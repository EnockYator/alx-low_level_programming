#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 *malloc_checked - Allocates memory using malloc
 *@b: Integral size of the memory to be allocated
 *Return: pointer to the allocated memory on success
 */

void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
	{
		exit(98);
	}

	return (mem);
}
