#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural sqare root of a number
 * @n: input
 * Return: return 1 if n doesn't have natural sqare root, or
*			natural sqare root of an input
*/

int square(int n, int v);
int _sqrt_recursion(int n)
{
	return (sqare(n, 1));
}

/**
 * square - for square root calculation
 * @n: input
 * @v: square root value
 * Return: results of square root calculating as int
 */

int square (int n, int v)
{
	if (v * v == n)
		return (v);
	else if (v * v < n)
		return (square (n, v + 1));
	else 
		return (-1);
}
