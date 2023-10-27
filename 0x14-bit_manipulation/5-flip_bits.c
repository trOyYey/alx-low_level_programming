#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would flip
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: unsinged int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	n = n ^ m;
	m = 0;

	while (n)
	{
		if (n & 1)
			m++;
		n = n >> 1;
	}
	return (m);
}
