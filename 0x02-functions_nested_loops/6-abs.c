#include "main.h"

/**
 *_abs - Finds absolute value of a number
 *@num: Number
 *Return:0
 */

int _abs(int num)
{
	if (num < 0)
		num = num * (-1);
	return (num);
}
