#include "main.h"

/**
 * _strspn - Searches a string for a set of bytes
 * @s: String array
 * @accept: Character array
 * Return: Number of bytes in the intial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
int i;
int j;
int c;

i = 0;
c = 0;
while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (s[i] == accept[j])
{
c++;
break;
}
j++
}
if (accept[j] == '\0')
{
break;
i++;
}
return (c);
}
