#include "main.h"

/**
 *_isdigit - Checks if a character is a digit
 *@c: The character to be checked
 *Return:1 if c is a digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= (0 + '0') && c <= (9 + '0'))
		return (1);
	else
		return (0);
}
