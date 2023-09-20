#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: input
 * Return: nothin
 */

void rev_string(char *s)
{
	int l, i;
	char tmp;

	for (l = 0; s[i] != '\0'; l++)
		;
	for (i = 0; i < count / 2; i++)
	{
		tmp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = tmp;
	}
}
