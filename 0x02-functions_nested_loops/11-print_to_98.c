#include "main.h"
include <stdio.h>

/**
 * print_to_98 - functions that prints all natural numbers from n to 98
 * @n: input
 * Return: n
 */

void print_to_98(int n);
{
	int a;

	if ( n < 98)
	{
		for (a = n; a <= 98; a++)
		{
			printf("%d", a);
			if (a != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if ( n > 98)
	{
		for (a = n; a >= 98; a--)
		{
			printf("%d", a);
			if (a != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n == 98)
		printf("%d\n", n);
}
