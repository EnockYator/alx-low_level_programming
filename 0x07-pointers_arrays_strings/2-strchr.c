#include "main.h"

/**
 *_strchr - Searches a character in a string
 *@s: The string
 *@c: The character to be searched
 *Return: Pointer to the character if found,NULL if not found
 */

char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (!*s++)
		{
			return (0);
		}
	}
		return (s);
}
