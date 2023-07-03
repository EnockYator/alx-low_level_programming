#include "main.h"

/**
 *_memcpy - Copies n number of bytes from source to desrination memory
 *@dest: Pointer to destination memory area
 *@src: Pointer to source memory area
 *@n: Number of bytes to be copied
 *Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *original_dest = dest;

while (n--)
{
*dest++ = *src++;
}
return (original_dest);
}
