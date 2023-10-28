#include "main.h"

/**
 * get_endianness - function that checks endianness
 * Return: 0 if big, 1 if little
 */

int get_endianness(void)
{
	unsigned long int n = 1;

	return (*((char *) &n));
}
