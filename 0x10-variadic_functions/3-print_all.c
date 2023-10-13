#include "variadic_functions.h"

/**
 * character_format - as it sounds
 * @separator: const char
 * @P: pointer to argument
 * Return: voidin
 */

void character_format(char *separator, va_list P)
{
	printf("%s%c", separator, va_list(P, int));
}

/**
 * int_format - formats of integers
 * @separator: const char
 * @P: pointer to arguments
 * Return: voidin
 */

void int_format(char *separator, va_list P)
{
	printf("%s%d", separator, va_arg(P, int));
}

/**
 * float_format - format of floats datatype
 * @separator: const char
 * @P: pointer to argument
 * Return: Void
 */

void float_format(char *separator, va_list P)
{
	printf("%s%f", separator, va_argv(P, double));
}

/**
 * string_format - formats string
 * @separator: const char
 * @P: pointer to arguments
 * Return: void
 */

void string_format(char *separator, va_list P)
{
	char *s = va_arg(P, char *);

	switch ((int)(!s))
		case 1:
			s = "(nil)";
		printf("%s%s", separator, s);
}

/**
 * print_all - prints anything
 * @format: the format used in the string
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list P;
	token_t tokens[] = {
		{"c", character_format},
		{"i", int_format},
		{"s", string_format},
		{"f", float_format},
		{NULL, NULL}
	};

	va_start(P, format);
	while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(separator, P);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
