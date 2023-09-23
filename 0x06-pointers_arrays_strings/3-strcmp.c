#include "main.h"

/**
 * int_strcmp - function that compares two strings
 * @s1: first input
 * @s2 2nd input
 * Return: 1 if true, 0 if false
 */

int _strcmp(char *s1, char *s2)
{
	int totall = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			totall = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (totall);
}
