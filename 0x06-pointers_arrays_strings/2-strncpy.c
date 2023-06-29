#include "main.h"

/**
 *_strncpy - Copies a string from source to destination
 *@dest: Destination string
 *@src: Source string
 *@n:Maximum number of characters to be copied
 *Return: Pointer to the destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

for (; i < n && src[i] != '\0;++i')
{
dest[i] = src[i];
}
while (i < n)
{
dest[i++] = '\0';
}
return (dest);
}
