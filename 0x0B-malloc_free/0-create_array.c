#include "main.h"
#include <stdlib.h>

/**
 *create_array - Creates an array of chars and initialize it to
 *a spefic char
 *@size: Size of the memory
 *@c: Char in the array
 *Return: NULL if size = 0,NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
int i;
char *arr = (char *)malloc(size * sizeof(char));

if (size == 0)
{  
return (NULL);
}
if (arr == NULL)
{
return (NULL);
}

for (i = 0; i < size; i++)
{
arr[i] = c;
_putchar(arr);
}
}
