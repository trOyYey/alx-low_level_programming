#include "main.h"

/**
 * binary_to_uint - function that converts binary to unsigned int
 * @b: pointer to string of 0 and 1 chars
 * Return: converted number or 0 if failed
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int bin = 0;

	while (b == NULL)
		return (0);

	while (b[i])
	{
		bin = bin << 1;
		if (*b[i] > '9' && *b[i] < '0')
			return (0);
		bin = bin + (b[i] - '0');
		i++;
	}
	return (bin)
}


