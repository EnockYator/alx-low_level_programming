#include "main.c"

/**
 *_strchr - Searches a character in a string
 *@s: The string
 *@c: The character to be searched
 *Return: Pointer to the character if found,NULL if not found
 */

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return s;
}
else
{
return NULL;
}
s++;
}
}
