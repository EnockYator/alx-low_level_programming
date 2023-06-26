#include "main.h"

/**
 *rev_string - Print string in reverse
 *@s: String
 *Return: Nothing
 */
void rev_string(char *s)
{
	int j = 0, i = 0, Aux;

	while (s[j] != '\0')
	{
		j++;
	}
	j--;

	while (j > i)
	{
		Aux = s[j];
		s[j--] = s[i];
		s[i++] = Aux;
	}
}
