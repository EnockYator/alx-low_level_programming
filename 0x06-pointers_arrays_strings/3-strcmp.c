#include "main.h"

/**
 *_strcmp - Compares two strings
 *@s1: First string
 *@s2: Second string
 *Return: 0 if s1 ==s2,-1 if s1<s2,+ otherwise
*/

int _strcmp(char *s1, char *s2)
{
while ((*s1 == *s2))
{
s1++;
s2++;
}
 return (*(unsigned char*)s1 - *(unsigned char*)s2);
}
