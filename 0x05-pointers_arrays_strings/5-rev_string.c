#include "main.h"

/**
 * rev_string - functoion that reverses a string
 * @s: input
 * Return: nothing
 */

void rev_String(char *s);
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
