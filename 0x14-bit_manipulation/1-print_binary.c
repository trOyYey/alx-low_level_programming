#include "main.h"

/**
 * print_binary - writes binary representation of a number
 * @n: binary number to print
 * Return: void
 */

void print_binary(unsigned long int n)
{

	if (n >> 1 == 0)
	{
		_putchar(n + '0');
	}
	else
	{
		print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
}
