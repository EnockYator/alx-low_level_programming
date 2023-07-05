#include "main.h"

/**
 * long_1 - check the code for Holberton School students.
 * @s: number
 *
 * Return: Always 0.
 */

int long_1(char *s)
{
	if (*s != '\0')
	{
		return (1 + long_1(s + 1));
	}
	return (0);

}
/**
 * compare - Checks if a string is a palindrome or not
 * @s: number
 * @l: lenght
 *
 * Return: Always 0.
 */
int compare(char *s, int l)
{
	if (l <= 0)
	{
		return (1);
	}
	if (*s == *(s + (l - 1)))
	{
		return (compare(s + 1, l - 2));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: character
 *
 * Return: 1 if the string is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int l;

	l = long_1(s);
	return (compare(s, l));
}
