#include "main.h"

/**
 *_strlen - Print string length
 *@s: String
 *Return: Length of the string
 */

int _strlen(char *s)
{
int i;
int j;

for (i = 0; i < 5; i++)
{
j = 0;
while (*(s[i] + j) != '\0')
{
_putchar(j + '0');
}
}
}
