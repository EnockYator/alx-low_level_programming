#include "main.h"

/**
 *_isupper - Checks if a character is uppercase
 *@c: The character to be checked
 *Return: 1 if c is uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	else
		return (0);
}
