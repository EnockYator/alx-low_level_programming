#include "main.h"

/**
 *_strcpy - print reverse characters.
 *@dest: Array
 *@src: Array
 *Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int index;

	for (index = 0; src[index]; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = src[index];
	return (dest);

}
