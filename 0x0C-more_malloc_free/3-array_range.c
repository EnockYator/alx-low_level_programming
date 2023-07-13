#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates array of integers.
 * @min: minimum.
 * @max: maximum.
 *
 * Return: Pointer to memory created
 */
int *array_range(int min, int max)
{
	int *mem, i;

	if (min > max)
	{
		return (NULL);
	}

	mem = malloc(sizeof(*mem) * (max - min + 1));
	if (mem == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++, min++)
	{
		*(str + i) = min;
	}
	return (mem);
}
