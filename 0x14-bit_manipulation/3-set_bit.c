#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at given index
 * @n: pointer
 * @index: starting from 0 of the bit
 * Return: 1 if worked , -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 32 || n == NULL)
		return (-1);
	*n = *n | (1 << index);

	return (1);
}
