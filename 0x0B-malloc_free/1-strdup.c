#include "main.h"
#include <stdint.h>
#include <stdlib.h>

/**
 *_strdup - Returns a pointer to a newly allocated space in memory,
 *          containing a copy of the string given as a parameter.
 *@str: String
 *Return:NULL if str = NULL,
 *       NULL if insufficient memory was available,
 *       a pointer to the duplicated string on success
 */

char *_strdup(char *str)
{
	intptr_t i = (intptr_t)str;
	intptr_t j;
	int size;

	if (*str != '\0')
	{
		j = (intptr_t)str;
		++str;
		size = ((j - i) + 1);
	}

	char *mem = (char *)malloc(size * (sizeof(char)));

	if (mem == NULL)
		return (NULL);
	return (mem);
}
