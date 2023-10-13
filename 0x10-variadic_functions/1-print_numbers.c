#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by new line
 * @separator: string to be printed between numbers
 * @n: const unsigned int
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list P;

	if (n <= 0)
	{
		printf("\n");
		return;
	}
	va_start(P, n);

	while (i--)
		printf("%d%s", va_arg(P, int),
				i ? (separator ? separator : "") : "\n");
	va_end(P);
}
