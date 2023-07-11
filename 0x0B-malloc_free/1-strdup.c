#include "main.h"
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
	int x;
	int length = 0;
	char *mem;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
	{
		length++;
	}

	mem = (char *)malloc((length + 1) * (sizeof(char)));

	if (mem == NULL)
		return (NULL);
	for (x = 0; x < length; x++)
	{
		mem[x] = str[x];
	}
	return (mem);
}
