#include "main.h"

/**
 * _isdigit - function that checks for a digit from 0 to 9
 * @c: the input
 * Return: 1 if c is a digit
*		otherways return 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
