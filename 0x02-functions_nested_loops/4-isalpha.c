#include "main.h"

/**
 *_isalpha - Checks if acaracter is alphabet retrurning
 *           1 if alphabet and 0 otherwise
 *@c: Character to be checked
 *Return:1 if character is alphabet, 0 otherwise
*/

int _isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
		return (1);
	else
		return (0);
}
