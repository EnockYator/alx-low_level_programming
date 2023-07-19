#include "function_pointers.h"

/**
 *print_name - function to print name
 *@name: name of a person
 *@f: pointer to function
 *Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;

	f(name);
}
