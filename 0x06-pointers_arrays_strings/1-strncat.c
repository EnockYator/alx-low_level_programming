#include "main.h"

/**
 *_strncat - Concatenates two strings
 *@dest: Destination string
 *@src: source string
 *@n: Maximum number of bytes from source string
 *Return: Pointer to the destination string
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;

while (dest[i] != '\0')
{
++i;
}
while (src[j] != '\0' && n > 0)
{
dest[i] = src[j];
++i;
++j;
--n;
}
return (dest);
}

