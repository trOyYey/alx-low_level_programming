#include "main.h"

/**
 * _pow_recursion - function that reutnrs the value of x raised to power of u
 * @x: input1
 * @y: input2
 * Return: value of x raised by power of y, or -1 if y is lower than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
