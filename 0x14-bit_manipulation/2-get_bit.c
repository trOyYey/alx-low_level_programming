#include "main.h"

/**
 * get_bit - function that gets the value at given index
 * @n: unsigned long int
 * @index: the index
 * Return: value of the bit at index or -1 if failed
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 32)
		return (-1);
	return ((n >> index) & 1);
}
