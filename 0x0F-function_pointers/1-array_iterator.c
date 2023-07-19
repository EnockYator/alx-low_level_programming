#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - execute function given as parameter on each array element
 * @array: array elements
 * @size: size of the array
 * @action: function
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int  i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
