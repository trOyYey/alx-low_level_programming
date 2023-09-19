#include "main.h"

/**
 * rev_string - functoion that reverses a string
 * @s: input
 * Return: nothing
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
