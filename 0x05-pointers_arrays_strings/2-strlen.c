#include "main.h"

/**
 *_strlen - Print string length
 *@s: String
 *Return: Length of the string
 */

int _strlen(char *s)
{
int i;

for (i = 0; s[i] != '\0' ; i++)
;
return (i);
} 
