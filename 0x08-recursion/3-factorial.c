#include "main.h"

/**
 * factorial - function that returns the factorial of given number
 * @n: input
 * Return: factorial of given number or -1 if error
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
