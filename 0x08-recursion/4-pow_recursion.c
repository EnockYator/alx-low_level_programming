#include "main.h"

/**
 *_pow_recursion - Returns the value of x raised to
 *                 the power of y
 *@x: The actual number
 *@y: The power
 *Return: The value of the number raised by the power
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
else
return (x * _pow_recursion(x, (y - 1)));
}
