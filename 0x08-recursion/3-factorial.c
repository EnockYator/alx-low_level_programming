#include "main.h"

/**
 *factorial - Returns the factorial of a given number
 *@n: The number
 *Return: Factorial of the number
 */

int factorial(int n)
{
int result;

if (n <= 1)
return (1);

result = n * factorial(n - 1);
return (result);
}
