#include "main.h"

/**
 * _isupper - function that checks for uppercase characters
 * @c: input
 * Return: if upper 1 otherways 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
