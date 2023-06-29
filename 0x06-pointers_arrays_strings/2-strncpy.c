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
int j = 0;

dest[i];
while (n > 0)
{
dest[i] = src[j];
++i;
++j;
--n;
}
return (dest);
}
