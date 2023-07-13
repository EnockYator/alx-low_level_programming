#include "main.h"
#include <stdlib.h>

/**
 *_strlen - Finds the length of string
 *@s: First string
 *@ss: Second string
 *Return: Length of the string
 */

int _strlen(char *s, char *ss)
{
	unsigned int str1;
	unsigned int str2;
	unsigned int ls = 0;
	unsigned int lss = 0;

	while (s[ls] != '\0')
	{
		ls++;
		str1 = ls;
	}
	while (ss[lss] != '\0')
	{
		lss++;
		str2 = lss;
	}
	return (str1);
	return (str2);
}
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
	l1 = _strlen(s1, s2);
	l2 = _strlen(s1, s2);
	if (n < l2)
	{
		l2 = n;
		_mem = malloc(sizeof(*_mem) * (l1 + n + 2));

		if (_mem == NULL)
			return (NULL);
		for (i = 0; i < l1; i++)
			_mem[i] = s1[i];
		for (j = 0; j < l2; j++)
		{
			_mem[i] = s2[j];
			i++;
		}
	}
	else
	{
		_mem = malloc(sizeof(*_mem) * (l1 + l2 + 1));
		for (i = 0; i < l1; i++)
			_mem[i] = s1[i];
		for (j = 0; j < l2; j++)
		{
			_mem[i] = s2[j];
			i++;
		}
	}
	_mem[i] = '\0';
	return (_mem);
}
