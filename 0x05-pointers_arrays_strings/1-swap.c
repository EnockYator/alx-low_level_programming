#include "main.h"

/**
 *swap_int - swaps two intergers a and b
 *@a: First integer
 *@b: Second integer
 *Return:Nothing
 */

void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
