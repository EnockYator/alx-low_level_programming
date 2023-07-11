#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - rees a 2 dimensional grid previously created
 *by your alloc_grid function
 * @grid: height array
 * @height: width array
 *
 * Return: Pointer
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(*(grid + i));
	}
	free(grid);
}
