#include "main.h"

/**
 *_strcmp - Compares two strings
 *@s1: First string
 *@s2: Second string
 *Return: 0 if s1 ==s2,-1 if s1<s2,+ otherwise
*/

int _strcmp(char *s1, char *s2)
{

int i = 0;

while ((s1[i] == s2[i]) && (s1[i] != '\0'))
{
++i;
return (s1[i] - s2[i]);
}
