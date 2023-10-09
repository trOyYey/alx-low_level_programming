#include "main.h"

/**
 * *malloc_checked - function that allocates memory
 * @b: integer
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);
	return (m);
}
