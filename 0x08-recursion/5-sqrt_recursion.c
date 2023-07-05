#include "main.h"

/**
 *_sqrt_recursion - Returns natural square root of a number
 *@n: The actual number
 *Return: Square root of the number
 */

int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}

/**
 *_sqrt_a - Helps to deduce the square root
 *@n: The number
 *@p: The power
 *Return: Square root
 */

int _sqrt_a(int n, int p)
{
	if (p * p == n)
	{
		return (p);
	}
	else if (p * p > a)
	{
		return (-1);
	}
	return (sqrt_a(a, p + 1));
}
