#include "main.h"
#include <stdlib.h>
/**
 *string_nconcat - Concatenates two strings
 *@s1: First string
 *@s2: Second string
 *@n: Number of bytes of the second string
 *Return: NULL on failure, Pointer to newly allocated space on success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, l1 = 0, l2 = 0;
	char *_mem;

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
	_mem = malloc(sizeof(*_mem) * (l1 + l2 + 1));
	if (_mem == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
		_mem[i] = s1[i];
	if (n < l2)
	{
		for (j = 0; j < n; j++)
		{
			_mem[i] = s2[j];
			i++;
		}
	}
	else
	{
		for (j = 0; j < l2; j++)
		{
			_mem[i] = s2[j];
			i++;
		}
	}
	_mem[i] = '\0';
	return (_mem);
}
