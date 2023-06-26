#include "main.h"

/**
 *_strlen - Print string length
 *@s: String
 *Return: Always 0
 */

int _strlen(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
_putchar(i + '0');
}
}
