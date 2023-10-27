#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0
 * @index: the index, starting from 0
 * @n: unsigned long int pointer
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 32 || n == NULL)
		return (-1);
	if ((*n >> index & 1) == 1)
		*n = *n ^ (1 << index);

	return (1);
}
