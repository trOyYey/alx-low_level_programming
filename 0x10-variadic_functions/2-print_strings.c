#include "variadic_functions.h"

/**
 * print_strings - function that prints strings followed by new line
 * @separator: const char
 * @n: const unigned int
 * Return: voidin
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list P;
	char *s;
	int i = n;

	if (n <= 0)
	{
		printf("\n");
		return;
	}
	va_start(P, n);
	while (i--)
		printf("%s%s", (s = va_arg(P, char *)) ? s : "(nil)",
				i ? (separator ? separator : "") : "\n");
	va_end(P);
}
