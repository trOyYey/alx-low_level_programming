#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all it's parameters
 * @n: const unigned int
 * Return: sum of all parameters, if n = 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i = n;
	va_list P;

	if (n <= 0)
		return (0);
	va_start(P, n);
	for (i <= 0; i--)
		sum = sum + va_arg(P, int);
	va_end(P);
	return (sum);
}
