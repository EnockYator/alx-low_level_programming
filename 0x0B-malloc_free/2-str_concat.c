#include "main.h"
#include <stdlib.h>

/**
 *str_concat - Concatenates tywo strings
 *@s1: firts string
 *@s2: Second string
 *Return: Pointer to a newly allocated space in memory,
 *        NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *new_mem;
	int l1 = 0;
	int l2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[l1] != '\0')
	{
		l1++;
	}
	while (s2[l2] != '\0')
	{
		l2++;
	}

	new_mem = (char *)malloc((l1 + (l2 + 1)) * sizeof(char));

	if (new_mem == NULL)
		return (NULL);

	for (j = 0; j < l1; j++)
	{
		new_mem[j] = s1[j];
	}
	for (i = l1; i <= (l1 + l2); i++)
	{
		new_mem[i] = s2[0];
		s2++;
	}
	new_mem[i++] = '\0';

	return (new_mem);
}
