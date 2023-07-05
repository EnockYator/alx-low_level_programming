#include "main.h"

/**
 *_sqrt_recursion - Returns natural square root of a number
 *@n: The actual number
 *Return: Square root of the number
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else
return (_sqrt_helper(n, 0, n));
}

/**
 *_sqrt_helper - Helps to deduce the square root
 *@n: The number
 *@start: Starting point
 *@end: Ending point in finding square root
 *Return: Multiple return values
 */

int _sqrt_helper(int n, int start, int end)
{
if (start > end)
{
return (-1);
}

int mid = start + (end - start) / 2;
int square = mid * mid;

if (square == n)
{
return (mid);
}
else if (square < n)
{
return (_sqrt_helper(n, (mid + 1), end));
}
else
{
return (_sqrt_helper(n, start, (mid - 1)));
}
}
