#include "main.h"

/**
 * _strspn - Searches a string for a set of bytes
 * @s: String array
 * @accept: Character array
 * Return: Number of bytes in the intial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, i;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[j] == accept[i])
				break;
		}
		if (!(accept[i]))
			break;
	}
	return (j);
}
