#include "main.h"

/**
 *_strstr - Locates a substring in a string
 *@haystack: The string to be checked
 *@needle: The substring
 *Return: Pointer to the beginning of the located substring,
 *or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, c;

	while (*(haystack + i) != '\0')
	{
		c = i;
		j = 0;
		while (*(needle + j) == *(haystack + i) && *(haystack + i) != '\0'
		       && *(haystack + i) != '\0')
		{
			i++;
			j++;
		}
		if (*(needle + j) == '\0')
		{
			return (haystack + c);
		}
		i = c + 1;
	}
	return (0);
}
