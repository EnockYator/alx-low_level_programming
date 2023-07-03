#include "main.h"

/**
 *_memset -Fills memory with a constant byte
 *@s: Points memory to be filled
 *@b: Character to fill the memory
 *@n: Number of first bytes in memory to be filled
 *Return: Pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
